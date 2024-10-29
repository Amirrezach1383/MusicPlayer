#include "MusicPlayer.h"
#include "qaudiooutput.h"
#include "ui_MusicPlayer.h"
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>



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



}

void MainWindow::addPlayListPB () {

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::makeAndSetPlayListWidget() {

}

void MainWindow::makeAndSetMusicsWidget() {
    // اون کارا که تو اون فیلمه میکردن رو انجام بده تا بشه آهنگ رو ادد کرد
    QString title, artist;
    QPushButton *icon = new QPushButton;
    NewQFrame *frame = new NewQFrame;
    icon->setIcon(QIcon(":/Icons/music-notes.png"));
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
    label->setText(title + "\n" + artist);

    hLayout->addWidget(icon, 0);
    hLayout->addWidget(label, 1);

    frame->setLayout(hLayout);

    ui->musicsSA->setWidget(frame);

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

