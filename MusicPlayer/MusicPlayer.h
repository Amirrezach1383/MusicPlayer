#ifndef MUSICPLAYER_H
#define MUSICPLAYER_H

#include <QMainWindow>
#include <Qvector>
#include <LinkedList.h>
#include <Music.h>

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
public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QVector<Node<Music>> playLists;


private:
    Ui::MainWindow *ui;

};
#endif // MUSICPLAYER_H
