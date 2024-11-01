#include "MusicPlayer.h"
#include "ui_MusicPlayer.h"
#include <QDebug>

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

    connect(ui->addMusicPB, SIGNAL(clicked(bool)), this, SLOT(addMusicPB()));
    connect(ui->addPlayListPB, SIGNAL(clicked(bool)), this, SLOT(makeAndSetPlayListWidget()));
    connect(ui->StopPB, SIGNAL(clicked(bool)), this, SLOT(playAndStopMusic()));



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
    for(int i = 0; i < vLayout->count(); i++) {
        if(vLayout->count() == 1) continue;

        QLayoutItem *item = vLayout->itemAt(0);
        NewQFrame *tmpFrame = qobject_cast<NewQFrame*>(item->widget());

        for(auto it = musicMap.begin(); it != musicMap.end(); it++) {
            if(it.key() == tmpFrame)
                musicMap.erase(it);
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

bool MainWindow::playListChecked(){
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
    playListMap.insert(frame, playList.getHead());

}

void MainWindow::unCheckedOtherMusicFrame(NewQFrame *frame) {
    for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
        if(it.key() == frame) continue;
        else it.key()->setChecked(false);
    }

}

void MainWindow::loopPlayList()
{

}

void MainWindow::nextMusic()
{

}

void MainWindow::prevMusic()
{

}

void MainWindow::deleteMusicPBClicked()
{

}

void MainWindow::deleteMusic(QString name)
{

}

void MainWindow::searchPBClicked()
{

}

void MainWindow::deletePlayListPBClicked()
{

}

void MainWindow::shufflePBClicked() {

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

void MainWindow::playMusic() {
    NewQFrame *frame = qobject_cast<NewQFrame*>(sender());
    unCheckedOtherMusicFrame(frame);
    Music music;

    for(auto it = musicMap.begin(); it != musicMap.end(); ++it) {
        if(it.key() == frame) {
            music = it.value();
            break;
        }
    }

    mediaPlayer->setSource(QUrl::fromLocalFile(music.getAddress()));
    mediaPlayer->play();
    ui->StopPB->setChecked(true);
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

    connect (frame, SIGNAL(clicked()), this, SLOT(playMusic()));

}

void MainWindow::playAndStopMusic() {
    if (mediaPlayer->isPlaying()) {
        mediaPlayer->pause();
    } else {
        mediaPlayer->play();
    }
}

void MainWindow::addMusicPB() {
    if(!playListChecked()) {
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

