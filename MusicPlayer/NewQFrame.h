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
            "background-color: rgba(8, 0, 35, 0.8);"
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

            // QPushButton {
            //     text-align : center;

            //     border-radius : 5 px;
            // color: white;
            // font: 9pt "Playwrite DE Grund";
            // height : 40 px;
            //     border-radius:5px;
            // padding: 8px 16px;
            // }
            // QPushButton:hover {
            //     background-color: rgba(8, 0, 35, 1);
            // font: 700 9pt "Playwrite DE Grund";
            // }
            // QPushButton:checked {
            //     background-color: rgba(5, 0, 25, 1);
            // font: 700 9pt "Playwrite DE Grund";
            // }

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
