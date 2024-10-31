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
    QHBoxLayout * hLayout = qobject_cast<QHBoxLayout*>(frame->layout());

    QLayoutItem *item = hLayout->itemAt(1);
    QLabel *playListName = qobject_cast<QLabel*>(item->widget());

    QString name = playListName->text();
    QString idx = name[name.length() - 1];
    int idxI = 0;
    idx.number(idxI);

    cleanMusicField();


    Node<Music> *tmp = playLists[idxI - 1].getHeader();
    while(tmp != playLists[idxI - 1].getTrailer()){
        makeAndSetMusicsWidget(tmp->getData());
        tmp = tmp->getNext();
    }

}

void MainWindow::cleanMusicField() {
    QVBoxLayout * vLayout = qobject_cast<QVBoxLayout*>(ui->musicFrame->layout());
    for(int i = 0; i < vLayout->count() - 1; i++) {
        QLayoutItem *item = vLayout->itemAt(i);
        NewQFrame *tmpFrame = qobject_cast<NewQFrame*>(item->widget());
        QHBoxLayout *tmpHLayout = qobject_cast<QHBoxLayout*>(tmpFrame->layout());
        while(tmpHLayout->count() != 0) {
            delete tmpHLayout->itemAt(0);
        }
        delete tmpFrame;
    }

}



void MainWindow::makeAndSetPlayListWidget() {
    QVBoxLayout *frameLayout =  qobject_cast<QVBoxLayout*>(ui->frame_2->layout());
    LinkedList<Music> newPlayList;

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
    QString fileName = QFileDialog::getOpenFileName(this, "Select Media File", "", "Audio Files (*.mp3)");
    Music music;
    if(!fileName.isEmpty()) {
        music.setAddress(fileName);
    } else
        return;

    QFileInfo file(fileName);
    music.setTitle(file.fileName());

}

