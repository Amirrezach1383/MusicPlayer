#include "MusicPlayer.h"
#include "ui_MusicPlayer.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    playListBG = new QButtonGroup;

    mediaPlayer = new QMediaPlayer(this);
    audioOutPut = new QAudioOutput;
    audioOutPut->setVolume(1);
    mediaPlayer->setAudioOutput(audioOutPut);

    connect(mediaPlayer, &QMediaPlayer::durationChanged, ui->horizontalSlider, &QSlider::setMaximum);
    connect(mediaPlayer, &QMediaPlayer::positionChanged, ui->horizontalSlider, &QSlider::setValue);
    connect(ui->horizontalSlider, &QSlider::sliderMoved, mediaPlayer, &QMediaPlayer::setPosition);

    connect(ui->addMusicPB, SIGNAL(clicked(bool)), this, SLOT(makeAndSetMusicsWidget()));
    connect(ui->addPlayListPB, SIGNAL(clicked(bool)), this, SLOT(makeAndSetPlayListWidget()));

    makeAndSetPlayListWidget();
}

void MainWindow::addPlayListPB () {

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



void MainWindow::makeAndSetPlayListWidget() {
    QVBoxLayout *frameLayout =  qobject_cast<QVBoxLayout*>(ui->frame_2->layout());
    Node<Music> newPlayList;

    playLists.push_back(newPlayList);

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

    hLayout->addWidget(icon, 0);
    hLayout->addWidget(label, 1);

    frame->setLayout(hLayout);

    frameLayout->insertWidget(frameLayout->count() - 1, frame);

    playListMap.insert(frame, newPlayList);

    connect(frame, SIGNAL(clicked()), this, SLOT(playListFrameClicked()));
}

void MainWindow::playListFrameClicked() {
    NewQFrame *frame = qobject_cast<NewQFrame*>(sender());
    unCheckedOtherPlayListsFrame(frame);


}

void MainWindow::makeAndSetMusicsWidget() {
    QString fileName = QFileDialog::getOpenFileName(this, "Select Media File", "", "Audio Files (*.mp3)");
    Music music;
    if(!fileName.isEmpty()) {
        music.setAddress(fileName);
    } else
        return;

    QFileInfo file(fileName);
    music.setTitle(file.fileName());

    QString title = music.getTitle();

    QVBoxLayout *frameLayout =  qobject_cast<QVBoxLayout*>(ui->frame->layout());

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

}


void MainWindow::playAndStopMusic() {
    if (mediaPlayer->isPlaying()) {
        mediaPlayer->pause();
    } else {
        mediaPlayer->play();
    }
}

void MainWindow::fillMusicField() {

}

void MainWindow::addMusicPB() {

}

