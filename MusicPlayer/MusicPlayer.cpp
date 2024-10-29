#include "MusicPlayer.h"
#include "qaudiooutput.h"
#include "ui_MusicPlayer.h"
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);

    m_player = new QMediaPlayer(this);
    m = new QAudioOutput;

    QString fileName = QFileDialog::getOpenFileName (this, tr("Select Audio File"), "", tr("MP3 File (*.MP3)"));
    m_player->setSource(QUrl::fromLocalFile(fileName));
    m_player->setAudioOutput(m);
    m->setVolume(1);

    QFileInfo file(fileName);

    connect(ui->StopPB, SIGNAL(clicked(bool)), this, SLOT(playAndStopMusic()));

    ui->songNameL->setText(file.fileName());

    m_player->play();
}

void MainWindow::addPlayListPB () {

}

MainWindow::~MainWindow() {
    delete ui;
}

// void MainWindow::playAndStopMusic() {
//     if (m_player->playbackState() == QMediaPlayer::PlayingState) {
//         m_player->pause();
//     } else {
//         m_player->play();
//     }
// }

