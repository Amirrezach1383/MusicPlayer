#include "MusicPlayer.h"
#include "qaudiooutput.h"
#include "ui_MusicPlayer.h"
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include <QMediaMetaData>


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

    connect(ui->addMusicPB, SIGNAL(clicked(bool)), this, SLOT(makeAndSetMusicsWidget()));


}

void MainWindow::addPlayListPB () {

}

MainWindow::~MainWindow() {
    delete ui;
}

void MainWindow::makeAndSetPlayListWidget() {

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
        "background: transparent;"
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

