#ifndef NEWQFRAME_H
#include <QFrame>
#include <QMouseEvent>

class NewQFrame : public QFrame{
    Q_OBJECT
public:
    NewQFrame(QWidget* parent = nullptr) : QFrame(parent) ,frameChecked(false){
        setStyleSheet(
            "QFrame {"
            "border: none;"
            "text-align: center;"
            "border-radius: 5px;"
            "font: 9pt \" Playwrite DE Grund\";"
            "color: rgb(255, 255, 255);"
            "height: 40px;"
            "}"

            "QFrame:hover {"
            "background-color: rgb(51, 51, 51);"
            "font: 700 9pt \"Playwrite DE Grund\";"
            "}"

            "QFrame:checked {"
            "background-color: rgb(51, 51, 51);"
            "font: 700 9pt \"Playwrite DE Grund\";"
            "}"
            );
    }
    bool isChecked () {
        return frameChecked;
    }

public slots :
    void setChecked(bool checked)
    {
        if (frameChecked != checked) {
            frameChecked = checked;

            emit checkedChanged(frameChecked);

            if (frameChecked) {
                setStyleSheet( "background-color: rgb(51, 51, 51);""font: 700 9pt \"Playwrite DE Grund\";");
            } else {
                setStyleSheet("background-color: none; ");
            }
        }
    }



signals :
    void clicked();
    void checkedChanged(bool checked);

private :
    void mousePressEvent (QMouseEvent * event) override {
        emit clicked();
        if(event->button() == Qt::LeftButton) {
            setChecked(!frameChecked);
        }

        QFrame::mousePressEvent(event);
    }

    bool frameChecked;

};

#define NEWQFRAME_H

#endif // NEWQFRAME_H
