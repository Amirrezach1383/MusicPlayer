#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMainWindow>
#include <Music.h>
#include <QAudioOutput>
#include <NewQFrame.h>
#include <QButtonGroup>
#include <QHash>
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include <QMediaMetaData>
#include <LinkList.h>
#include <QMessageBox>
#include <NewQMessageBox.h>
#include <QGraphicsOpacityEffect>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

private slots :
    void playAndStopMusic ();
    void addMusicPB ();
    void makeAndSetMusicsWidget (Music);
    void makeAndSetPlayListWidget ();
    void playListFrameClicked ();
    void musicFrameClicked();
    void loopPBClicked ();
    void nextMusic ();
    void prevMusic ();
    void extracted(Node<Music> *&deleteMusic, NewQFrame *&tmpFrame);
    void deleteMusicPBClicked();
    void checkMusicFinished ();
    void searchPBClicked ();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void shufflePlayingMusics ();
    void unCheckedOtherPlayListsFrame(NewQFrame*);
    void setPlayListsMusic(NewQFrame*);
    void cleanMusicField();

    bool playListIsChecked();
    void addMusicToPlayList (Music music);
    void unCheckedOtherMusicFrame (NewQFrame *);
    NewQFrame* findCheckedPlayListFrame ();

    bool isLastMusic ();

    void makePlayListLoop ();
    void breakPlayListLoop ();
    Node<Music> * findPlayingMusic (LinkList<Music>);
    void checkThePlayingMusic (Music);
    void playMusic (Music&);

    Node<Music> * findMusic (QString, LinkList<Music>&);

private:
    std::map<QString, LinkList<Music>> playLists;
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutPut;
    Ui::MainWindow *ui;
    QString playingMusic;
    QHash<NewQFrame*, Node<Music>*> playListMap ;
    QHash<NewQFrame*, Music> musicMap;

};
#endif // MUSICPLAYER_H
