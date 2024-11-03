#include "MusicPlayer.h"
#include "ui_MusicPlayer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    mediaPlayer = new QMediaPlayer(this);
    audioOutPut = new QAudioOutput;
    audioOutPut->setVolume(1);
    mediaPlayer->setAudioOutput(audioOutPut);

    connect(mediaPlayer, &QMediaPlayer::durationChanged, ui->horizontalSlider, &QSlider::setMaximum);
    connect(mediaPlayer, &QMediaPlayer::positionChanged, ui->horizontalSlider, &QSlider::setValue);
    connect(ui->horizontalSlider, &QSlider::sliderMoved, mediaPlayer, &QMediaPlayer::setPosition);
    connect(ui->horizontalSlider, SIGNAL(valueChanged(int)), this, SLOT(checkMusicFinished()));

    connect(ui->addMusicPB, SIGNAL(clicked(bool)), this, SLOT(addMusicPB()));
    connect(ui->addPlayListPB, SIGNAL(clicked(bool)), this, SLOT(makeAndSetPlayListWidget()));
    connect(ui->StopPB, SIGNAL(clicked(bool)), this, SLOT(playAndStopMusic()));

    connect(ui->loopPB, SIGNAL(clicked(bool)), this, SLOT(loopPBClicked()));

    connect(ui->nextPB, SIGNAL(clicked(bool)), this, SLOT(nextMusic()));
    connect(ui->prevPB, SIGNAL(clicked(bool)), this, SLOT(prevMusic()));

    // connect(ui->shufflePB, SIGNAL(clicked(bool)), this, SLOT(shufflePBClicked()));
    connect(ui->searchPB, SIGNAL(clicked(bool)), this, SLOT(searchPBClicked()));
    connect(ui->deletePlayListPB, SIGNAL(clicked(bool)), this, SLOT(deletePlayListPBClicked()));

    connect(ui->deleteMusicPB, SIGNAL(clicked(bool)), this, SLOT(deleteMusicPBClicked()));

    makeAndSetPlayListWidget();
}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::unCheckedOtherPlayListsFrame(NewQFrame *checkedFrame) {
    for(auto it = playListMap.begin(); it != playListMap.end(); it ++) {
        if(it.key() == checkedFrame) continue;
        else it.key()->setChecked(false);
    }
}

void MainWindow::setPlayListsMusic(NewQFrame* frame){
    cleanMusicField();
    QHBoxLayout * hLayout = qobject_cast<QHBoxLayout*>(frame->layout());

    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());
    LinkList<Music> checkedPlayList = playLists[playListName->text()];

    auto tmp = checkedPlayList.getHead();
    while(tmp != nullptr) {
        makeAndSetMusicsWidget(tmp->getData());
        tmp = tmp->getNext();
    }


}


void MainWindow::cleanMusicField() {
    QVBoxLayout * vLayout = qobject_cast<QVBoxLayout*>(ui->musicFrame->layout());
    while(vLayout->count() > 1) {
        QLayoutItem *item = vLayout->itemAt(0);
        NewQFrame *tmpFrame = qobject_cast<NewQFrame*>(item->widget());

        for(auto it = musicMap.begin(); it != musicMap.end(); it++) {
            if(it.key() == tmpFrame){
                musicMap.erase(it);
                break;
            }
        }

        QHBoxLayout *tmpHLayout = qobject_cast<QHBoxLayout*>(tmpFrame->layout());
        item = nullptr;
        item = tmpHLayout->itemAt(0);
        QPushButton *icon = qobject_cast<QPushButton*>(item->widget());
        delete icon;
        item = nullptr;
        item = tmpHLayout->itemAt(0);
        QLabel *label = qobject_cast<QLabel*>(item->widget());
        // QString lbl = label->text();
        delete label;
        delete tmpHLayout;
        delete tmpFrame;
    }

}

bool MainWindow::playListIsChecked(){
    for(auto it = playListMap.begin(); it != playListMap.end(); ++it) {
        if(it.key()->isChecked()) {
            return true;
        }
    }
    return false;
}

void MainWindow::addMusicToPlayList(Music music) {
    NewQFrame * frame;
    LinkList<Music> playList;

    for(auto it = playListMap.begin(); it != playListMap.end(); ++it) {
        if(it.key()->isChecked()) {
            frame = it.key();
        }
    }

    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());
    LinkList<Music> checkedPlayList = playLists[playListName->text()];
    checkedPlayList.pushBack(music);

    playLists[playListName->text()] = checkedPlayList;
    playListMap.insert(frame, checkedPlayList.getHead());

}

void MainWindow::unCheckedOtherMusicFrame(NewQFrame *frame) {
    for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
        if(it.key() == frame) continue;
        else it.key()->setChecked(false);
    }

}

NewQFrame *MainWindow::findCheckedPlayListFrame() {
    for(auto it = playListMap.begin(); it != playListMap.end(); ++it) {
        if(it.key()->isChecked())
            return it.key();
    }
    return new NewQFrame;
}

bool MainWindow::isLastMusic(){
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());
    LinkList<Music> checkedPlaylist = playLists[playListName->text()];

    if(playingMusic == checkedPlaylist.getTail()->getData().getAddress()) {
        return true;
    }
    else return false;

}

void MainWindow::makePlayListLoop(){
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());

    LinkList<Music> checkedPlayList = playLists[playListName->text()];
    checkedPlayList.makeLoop();
    playLists[playListName->text()] = checkedPlayList;

    playListMap[frame] = checkedPlayList.getHead();
}

void MainWindow::breakPlayListLoop() {
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());

    LinkList<Music> checkedPlayList = playLists[playListName->text()];
    checkedPlayList.breakLoop();
    playLists[playListName->text()] = checkedPlayList;

    playListMap[frame] = checkedPlayList.getHead();
}

void MainWindow::loopPBClicked() {
    if(ui->loopPB->isChecked() == true) {
        makePlayListLoop();
    } else {
        breakPlayListLoop();
    }
}

void MainWindow::nextMusic() {
    if(!mediaPlayer->isPlaying())
        return;
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());
    LinkList<Music> checkedPlayList = playLists[playListName->text()];

    if(checkedPlayList.getSize() == 0)
        return;

    Node<Music> * playedMusic  = findPlayingMusic(checkedPlayList);

    playedMusic = playedMusic->getNext();

    if(playedMusic == nullptr)
        playedMusic = checkedPlayList.getHead();

    Music music = playedMusic->getData();
    ui->songNameL->setText(music.getTitle());

    checkThePlayingMusic(music);
    playMusic(music);
}

Node<Music>* MainWindow::findPlayingMusic(LinkList<Music> musicList){
    Node<Music> *tmp = musicList.getHead();

    while(tmp != nullptr) {
        if(tmp->getData().getAddress() == playingMusic) {
            return tmp;
        }
        tmp = tmp->getNext();
    }
    return tmp;
}

void MainWindow::checkThePlayingMusic(Music music) {
    for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
        if(it.value().getTitle() == music.getTitle()) {
            it.key()->setChecked(true);
            unCheckedOtherMusicFrame(it.key());
        }
    }
}

void MainWindow::playMusic(Music & music) {
    mediaPlayer->setSource(QUrl::fromLocalFile(music.getAddress()));
    playingMusic = music.getAddress();
    mediaPlayer->play();
    ui->StopPB->setChecked(true);
}

void MainWindow::prevMusic() {
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());

    LinkList<Music> checkedPlayList = playLists[playListName->text()];
    if(checkedPlayList.getSize() == 0)
        return;

    Node<Music> * playedMusic  = findPlayingMusic(checkedPlayList);

    playedMusic = playedMusic->getPrev();

    if(playedMusic == nullptr)
        playedMusic = checkedPlayList.getTail();

    Music music = playedMusic->getData();
    checkThePlayingMusic(music);
    ui->songNameL->setText(music.getTitle());
    playMusic(music);
}

void MainWindow::deleteMusicPBClicked() {
    if(mediaPlayer->isPlaying())
        return;
    NewQMessageBox msgBox;
    QString songName;
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());

    LinkList<Music> checkedPlayList = playLists[playListName->text()];

    if(checkedPlayList.getSize() == 0)
        return;

    Node<Music>* tmp = checkedPlayList.getHead();
    while(tmp != nullptr) {
        msgBox.addItem(tmp->getData().getTitle());
        tmp = tmp->getNext();
    }

    Node<Music> * deleteMusic;
    msgBox.setWindowTitle("Delete Music");
    msgBox.setLabelText("Select Music You Want To Delete : ");

    if(msgBox.exec() == QDialog::Accepted) {
        songName = msgBox.getSelectedItem();
        deleteMusic = findMusic(songName, checkedPlayList);

        NewQFrame* tmpFrame;
        for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
            if(deleteMusic->getData().getTitle() == it.value().getTitle()) {
                tmpFrame = it.key();
            }
        }

        QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(tmpFrame->layout());
        QLayoutItem *item = hLayout->itemAt(0);
        QPushButton *icon = qobject_cast<QPushButton*>(item->widget());
        delete icon;
        item = nullptr;
        item = hLayout->itemAt(0);
        QLabel *label = qobject_cast<QLabel*>(item->widget());
        delete label;
        delete hLayout;

        for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
            if(it.key() == tmpFrame){
                musicMap.erase(it);
                break;
            }
        }
        delete tmpFrame;

        if(playingMusic == deleteMusic->getData().getAddress()) {
            ui->songNameL->setText("Music Name");
            playingMusic = "";
            ui->horizontalSlider->setTickInterval(0);
        }


        checkedPlayList.deleteData(&deleteMusic);

        playListMap[frame] = checkedPlayList.getHead();
        playLists[playListName->text()] = checkedPlayList;


    }else return;
}

void MainWindow::checkMusicFinished() {
    if(ui->horizontalSlider->value() == ui->horizontalSlider->maximum()) {
        if(isLastMusic()) {
            if(ui->loopPB->isChecked())
                nextMusic();
            else {
                mediaPlayer->stop();
                ui->songNameL->setText("Music Name");
                unCheckedOtherMusicFrame(new NewQFrame);
                playingMusic = "";
                ui->StopPB->setChecked(false);
            }
        }
        else if(ui->shufflePB->isChecked()) {
            shufflePlayingMusics();
        }
        else
            nextMusic();
    }
}

Node<Music> *MainWindow::findMusic(QString name, LinkList<Music> &list) {
    Node<Music> * tmp = list.getHead();
    while(tmp != nullptr) {
        if(tmp->getData().getTitle() == name)
            return tmp;
    }
    return tmp;
}

void MainWindow::searchPBClicked(){
    if(ui->searchLE->text() == "") {
        ui->searchBoxErrorLB->setText("Please fill the field");
        return;
    }
    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());
    LinkList<Music> checkedPlaylist = playLists[playListName->text()];

    QString musicName = ui->searchLE->text();

    Node<Music> * tmp = checkedPlaylist.getHead();
    while(tmp != nullptr) {
        if(tmp->getData().getTitle() == musicName)
            break;
        tmp = tmp->getNext();
    }

    if(tmp == nullptr) {
        ui->searchBoxErrorLB->setText("Not found");
        return;
    }

    cleanMusicField();
    makeAndSetMusicsWidget(tmp->getData());
}

void MainWindow::deletePlayListPBClicked() {

}

void MainWindow::shufflePlayingMusics() {
    if(!ui->shufflePB->isChecked()) return;

    NewQFrame * frame = findCheckedPlayListFrame();
    QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());
    LinkList<Music> checkedPlaylist = playLists[playListName->text()];
    int size = checkedPlaylist.getSize();

    srand(time(0));
    int randomNum = std::rand() % size + 1;

    checkedPlaylist.makeLoop();
    Node<Music> *tmp = checkedPlaylist.getHead();
    while(randomNum > 0) {
        tmp = tmp->getNext();
        randomNum --;
    }
    checkedPlaylist.breakLoop();
    Music music = tmp->getData();
    ui->StopPB->setChecked(true);
    checkThePlayingMusic(music);
    ui->songNameL->setText(music.getTitle());

    playMusic(music);
}

void MainWindow::makeAndSetPlayListWidget() {
    QVBoxLayout *frameLayout =  qobject_cast<QVBoxLayout*>(ui->frame_2->layout());
    LinkList<Music> newPlayList;


    QPushButton *icon = new QPushButton;
    NewQFrame *frame = new NewQFrame;
    icon->setIcon(QIcon(":/Icons/list.png"));
    icon->setIconSize(QSize(20, 20));
    icon->setStyleSheet(
        "QPushButton {"
        "border:none;"
        "background: transparent;"
        "text-align : center;"
        "}"
        );
    icon->setDisabled(true);

    QHBoxLayout * hLayout = new QHBoxLayout;
    QLabel *label = new QLabel;

    label->setText(tr("Play List %1").arg(frameLayout->count()));

    playLists[label->text()] = newPlayList;

    hLayout->addWidget(icon, 0);
    hLayout->addWidget(label, 1);

    frame->setLayout(hLayout);

    frameLayout->insertWidget(frameLayout->count() - 1, frame);

    playListMap.insert(frame, newPlayList.getHead());

    connect(frame, SIGNAL(clicked()), this, SLOT(playListFrameClicked()));
}

void MainWindow::playListFrameClicked() {
    NewQFrame *frame = qobject_cast<NewQFrame*>(sender());
    unCheckedOtherPlayListsFrame(frame);

    if(frame->isChecked() == false) {

        setPlayListsMusic(frame);

    } else cleanMusicField();
}

void MainWindow::musicFrameClicked() {
    NewQFrame *frame = qobject_cast<NewQFrame*>(sender());
    if(frame->isChecked()) {
        ui->StopPB->setChecked(false);
        ui->songNameL->setText("Music Name");
        mediaPlayer->stop();
        return;
    }
    unCheckedOtherMusicFrame(frame);
    Music music;

    for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
        if(it.key() == frame) {
            music = it.value();
            break;
        }
    }
    ui->songNameL->setText(music.getTitle());
    playMusic(music);
}

void MainWindow::makeAndSetMusicsWidget(Music music) {
    QString title = music.getTitle();

    QVBoxLayout *frameLayout =  qobject_cast<QVBoxLayout*>(ui->musicFrame->layout());

    QPushButton *icon = new QPushButton;
    NewQFrame *frame = new NewQFrame;
    icon->setIcon(QIcon(":/Icons/music-notes.png"));
    icon->setIconSize(QSize(20, 20));
    icon->setStyleSheet(
        "QPushButton {"
        "border:none;"
        "text-align : center;"
        "}"
        );
    icon->setDisabled(true);

    QHBoxLayout * hLayout = new QHBoxLayout;
    QLabel *label = new QLabel;
    label->setText(title);

    hLayout->addWidget(icon, 0);
    hLayout->addWidget(label, 1);

    frame->setLayout(hLayout);

    frameLayout->insertWidget(frameLayout->count() - 1, frame);
    musicMap.insert(frame, music);

    connect (frame, SIGNAL(clicked()), this, SLOT(musicFrameClicked()));

}

void MainWindow::playAndStopMusic() {
    if(playingMusic == "") {
        NewQFrame * frame = findCheckedPlayListFrame();
        QHBoxLayout *hLayout = qobject_cast<QHBoxLayout*>(frame->layout());
        QLayoutItem *item = hLayout->itemAt(1);
        QLabel *playListName = qobject_cast<QLabel*>(item->widget());
        LinkList<Music> checkedPlaylist = playLists[playListName->text()];

        if(checkedPlaylist.getSize() == 0) return;

        Music music = checkedPlaylist.getHead()->getData();
        ui->songNameL->setText(music.getTitle());
        checkThePlayingMusic(music);
        playMusic(music);

    }
    if (mediaPlayer->isPlaying()) {
        mediaPlayer->pause();
    } else {
        mediaPlayer->play();
    }
}

void MainWindow::addMusicPB() {
    if(!playListIsChecked()) {
        QMessageBox msgBox;
        msgBox.setWindowTitle(tr("Error"));
        msgBox.setText(tr("Please select a playlist"));

        msgBox.exec();
        return;
    }

    QString fileName = QFileDialog::getOpenFileName(this, "Select Media File", "", "Audio Files (*.mp3)");
    Music music;
    if(!fileName.isEmpty()) {
        music.setAddress(fileName);
    } else
        return;

    QFileInfo file(fileName);
    music.setTitle(file.fileName());
    makeAndSetMusicsWidget(music);
    addMusicToPlayList(music);
}

