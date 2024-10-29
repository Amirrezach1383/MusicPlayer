#ifndef NEWQFRAME_H
#include <QFrame>
class NewQFrame : public QFrame{
    Q_OBJECT
public:
    NewQFrame(QWidget* parent = nullptr) : QFrame(parent) {
        setStyleSheet(
            "QFrame {"
            "border: none;"
            "background: transparent;"
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

signals :
    void clicked();

private :
    void mousePressEvent (QMouseEvent* event) override {
        emit clicked();
        QFrame::mousePressEvent(event);
    }

};

#define NEWQFRAME_H

#endif // NEWQFRAME_H
