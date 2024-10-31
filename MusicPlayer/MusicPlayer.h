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
    void addPlayListPB ();
    void playAndStopMusic ();
    void fillMusicField ();
    void addMusicPB ();
    void makeAndSetMusicsWidget ();
    void makeAndSetPlayListWidget ();
    void playListFrameClicked ();

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    QVector<Node<Music>> playLists;

    void unCheckedOtherPlayListsFrame(NewQFrame*);


private:
    QMediaPlayer *mediaPlayer;
    QAudioOutput *audioOutPut;
    QButtonGroup *playListBG;
    Ui::MainWindow *ui;
    QHash<NewQFrame*, Node<Music>> playListMap ;

};
#endif // MUSICPLAYER_H
