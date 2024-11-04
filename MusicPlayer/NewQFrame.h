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
            "background-color: rgba(8, 0, 35, 0.8);"
            "height: 30px;"
            "padding: 8px 16px;"
            "}"

            "QFrame:hover {"
            "background-color: rgba(3, 0, 23, 1);"
            "font: 700 12pt \"Playwrite DE Grund\";"
            "}"
            "QLabel {"
            "text-align : center;"
            "background : transparent;"
            "font: 10pt \"Playwrite DE Grund\";"
            "color: rgb(255, 255, 255);"
            "height : 30 px;"
            "border-radius:5px;"
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
                setStyleSheet(
                    "QFrame {"
                    "background-color: rgba(3, 0, 23, 1);"
                    "border : none;"
                    "border-radius : 5px;"
                    "height: 30px;"
                    "padding : 8px 16px;"
                    "}"

                    "QLabel {"
                    "text-align : center;"
                    "background : transparent;"
                    "font: 700 10pt \"Playwrite DE Grund\";"
                    "color: rgb(255, 255, 255);"
                    "height :30 px;"
                    "border-radius:5px;"
                    "}"

                    );
            } else {
                setStyleSheet(
                    "QFrame {"
                    "border: none;"
                    "text-align: center;"
                    "border-radius: 5px;"
                    "background-color: rgba(8, 0, 35, 0.8);"
                    "height: 30px;"
                    "padding: 8px 16px;"
                    "}"

                    "QFrame:hover {"
                    "background-color: rgba(3, 0, 23, 1);"
                    "font: 700 10pt \"Playwrite DE Grund\";"
                    "}"

                    "QLabel {"
                    "text-align : center;"
                    "background : transparent;"
                    "font: 10pt \"Playwrite DE Grund\";"
                    "color: rgb(255, 255, 255);"
                    "height : 30 px;"
                    "border-radius:5px;"
                    "}");
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
