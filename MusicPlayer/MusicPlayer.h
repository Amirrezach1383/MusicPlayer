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

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    std::map<QString, LinkList<Music>> playLists;

    void unCheckedOtherPlayListsFrame(NewQFrame*);
    void setPlayListsMusic(NewQFrame*);
    void cleanMusicField();




private:
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutPut;
    Ui::MainWindow *ui;
    QHash<NewQFrame*, Node<Music>*> playListMap ;

};
#endif // MUSICPLAYER_H
