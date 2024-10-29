#include "MusicPlayer.h"
#include "ui_MusicPlayer.h"
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include "LinkedList.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) {
    ui->setupUi(this);
}

void MainWindow::addPlayListPB () {

}

MainWindow::~MainWindow() {
    delete ui;
}
