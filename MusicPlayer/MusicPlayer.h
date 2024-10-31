#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMainWindow>
#include <Qvector>
#include <LinkedList.h>
#include <Music.h>
#include <QAudioOutput>
#include <NewQFrame.h>
#include <QButtonGroup>
#include <QHash>
#include <QtMultimedia/QMediaPlayer>
#include <QFileDialog>
#include <QMediaMetaData>


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
    void fillMusicField ();
    void addMusicPB ();
    void makeAndSetMusicsWidget (Music);
    void makeAndSetPlayListWidget ();
    void playListFrameClicked ();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<LinkedList<Music>> playLists;

    void unCheckedOtherPlayListsFrame(NewQFrame*);
    void setPlayListsMusic(NewQFrame*);
    void cleanMusicField();




private:
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutPut;
    Ui::MainWindow *ui;
    QHash<NewQFrame*, LinkedList<Music>> playListMap ;

};
#endif // MUSICPLAYER_H
