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

    connect(ui->addMusicPB, SIGNAL(clicked(bool)), this, SLOT(addMusicPB()));
    connect(ui->addPlayListPB, SIGNAL(clicked(bool)), this, SLOT(makeAndSetPlayListWidget()));

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
    for(int i = 0; i < vLayout->count() - 1; i++) {
        QLayoutItem *item = vLayout->itemAt(i);
        NewQFrame *tmpFrame = qobject_cast<NewQFrame*>(item->widget());

        for(auto it = musicMap.begin(); it != musicMap.end(); it++) {
            if(it.key() == tmpFrame)
                musicMap.erase(it);
        }

        QHBoxLayout *tmpHLayout = qobject_cast<QHBoxLayout*>(tmpFrame->layout());
        while(tmpHLayout->count() != 0) {
            delete tmpHLayout->itemAt(0);
        }
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

    setPlayListsMusic(frame);
}

void MainWindow::playMusic() {
    NewQFrame *frame = qobject_cast<NewQFrame*>(sender());
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

}

