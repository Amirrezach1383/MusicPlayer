/********************************************************************************
** Form generated from reading UI file 'MusicPlayer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_5;
    QWidget *searchWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QLineEdit *searchLE;
    QPushButton *searchPB;
    QSpacerItem *horizontalSpacer;
    QLabel *searchBoxErrorLB;
    QWidget *mianWidget;
    QHBoxLayout *horizontalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QPushButton *addPlayListPB;
    QScrollArea *playListsSongsSA;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_7;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_10;
    QSpacerItem *verticalSpacer;
    QPushButton *deletePlayListPB;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *musicL;
    QPushButton *addMusicPB;
    QScrollArea *musicsSA;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QFrame *musicFrame;
    QVBoxLayout *verticalLayout_9;
    QSpacerItem *verticalSpacer_2;
    QPushButton *deleteSongPB;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *songNameL;
    QSpacerItem *horizontalSpacer_5;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *loopPB;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *prePB;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *StopPB;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *nextPB;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *shufflePB;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(810, 843);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        MainWindow->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:none;\n"
"	background: transparent;\n"
"}\n"
"QPushButton {\n"
"	text-align : center;\n"
"	background : transparent; \n"
"	border-radius : 5 px;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"/*	color: rgb(255, 255, 255);*/\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"}\n"
"QPushButton:hover {\n"
"	background-color: rgb(51, 51, 51);\n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgb(51, 51, 51);\n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QLabel {\n"
"	text-align : center;\n"
"	background : transparent; \n"
"	border-radius : 5 px;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	color: rgb(255, 255, 255);\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_5 = new QVBoxLayout(centralwidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(-1, -1, -1, 11);
        searchWidget = new QWidget(centralwidget);
        searchWidget->setObjectName("searchWidget");
        verticalLayout_2 = new QVBoxLayout(searchWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        searchLE = new QLineEdit(searchWidget);
        searchLE->setObjectName("searchLE");

        horizontalLayout->addWidget(searchLE);

        searchPB = new QPushButton(searchWidget);
        searchPB->setObjectName("searchPB");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/search.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        searchPB->setIcon(icon);
        searchPB->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(searchPB);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        searchBoxErrorLB = new QLabel(searchWidget);
        searchBoxErrorLB->setObjectName("searchBoxErrorLB");

        verticalLayout->addWidget(searchBoxErrorLB);


        verticalLayout_2->addLayout(verticalLayout);


        verticalLayout_5->addWidget(searchWidget);

        mianWidget = new QWidget(centralwidget);
        mianWidget->setObjectName("mianWidget");
        horizontalLayout_5 = new QHBoxLayout(mianWidget);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        widget = new QWidget(mianWidget);
        widget->setObjectName("widget");
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label = new QLabel(widget);
        label->setObjectName("label");

        horizontalLayout_2->addWidget(label);

        addPlayListPB = new QPushButton(widget);
        addPlayListPB->setObjectName("addPlayListPB");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/plus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addPlayListPB->setIcon(icon1);
        addPlayListPB->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(addPlayListPB);


        verticalLayout_3->addLayout(horizontalLayout_2);

        playListsSongsSA = new QScrollArea(widget);
        playListsSongsSA->setObjectName("playListsSongsSA");
        playListsSongsSA->setStyleSheet(QString::fromUtf8(""));
        playListsSongsSA->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 376, 524));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName("verticalLayout_7");
        frame_2 = new QFrame(scrollAreaWidgetContents);
        frame_2->setObjectName("frame_2");
        frame_2->setStyleSheet(QString::fromUtf8(""));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_10 = new QVBoxLayout(frame_2);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalSpacer = new QSpacerItem(17, 495, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_10->addItem(verticalSpacer);


        verticalLayout_7->addWidget(frame_2);

        playListsSongsSA->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(playListsSongsSA);

        deletePlayListPB = new QPushButton(widget);
        deletePlayListPB->setObjectName("deletePlayListPB");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deletePlayListPB->setIcon(icon2);
        deletePlayListPB->setIconSize(QSize(20, 20));

        verticalLayout_3->addWidget(deletePlayListPB);


        horizontalLayout_4->addWidget(widget);

        widget_2 = new QWidget(mianWidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        musicL = new QLabel(widget_2);
        musicL->setObjectName("musicL");

        horizontalLayout_3->addWidget(musicL);

        addMusicPB = new QPushButton(widget_2);
        addMusicPB->setObjectName("addMusicPB");
        addMusicPB->setIcon(icon1);
        addMusicPB->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(addMusicPB);


        verticalLayout_4->addLayout(horizontalLayout_3);

        musicsSA = new QScrollArea(widget_2);
        musicsSA->setObjectName("musicsSA");
        musicsSA->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"        border:none;\n"
"        background: transparent;\n"
"        text-align : center;\n"
"        }"));
        musicsSA->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 376, 524));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        musicFrame = new QFrame(scrollAreaWidgetContents_2);
        musicFrame->setObjectName("musicFrame");
        musicFrame->setFrameShape(QFrame::Shape::StyledPanel);
        musicFrame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_9 = new QVBoxLayout(musicFrame);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalSpacer_2 = new QSpacerItem(18, 495, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_2);


        verticalLayout_8->addWidget(musicFrame);

        musicsSA->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(musicsSA);

        deleteSongPB = new QPushButton(widget_2);
        deleteSongPB->setObjectName("deleteSongPB");
        deleteSongPB->setIcon(icon2);
        deleteSongPB->setIconSize(QSize(20, 20));

        verticalLayout_4->addWidget(deleteSongPB);


        horizontalLayout_4->addWidget(widget_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);


        verticalLayout_5->addWidget(mianWidget);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        verticalLayout_6 = new QVBoxLayout(widget_3);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_6);

        songNameL = new QLabel(widget_3);
        songNameL->setObjectName("songNameL");

        horizontalLayout_7->addWidget(songNameL);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_5);


        verticalLayout_6->addLayout(horizontalLayout_7);

        horizontalSlider = new QSlider(widget_3);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setStyleSheet(QString::fromUtf8("QSlider {\n"
"    background: #1C1C1C;\n"
"    border: 1px solid #333;\n"
"    height: 10px;\n"
"}\n"
"\n"
"QSlider::groove:horizontal {\n"
"    background: #333;\n"
"    height: 4px;\n"
"}\n"
"\n"
"QSlider::handle {\n"
"    background: #555; /* Dark gray handle */\n"
"    width: 24px; /* Increased width for circular shape */\n"
"    height: 24px; /* Height matches width for a circle */\n"
"    margin: -10px 0; /* Centering the handle on the track */\n"
"    border-radius: 12px; /* Rounded handle for a circle */\n"
"}\n"
"\n"
"QSlider::handle:hover {\n"
"    background: #CCCCCC; /* Light gray on hover */\n"
"}\n"
"\n"
"QSlider:disabled {\n"
"    background: #2A2A2A;\n"
"}\n"
"\n"
"QSlider::handle:disabled {\n"
"    background: #777;\n"
"}\n"
""));
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);

        verticalLayout_6->addWidget(horizontalSlider);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(15);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        loopPB = new QPushButton(widget_3);
        loopPB->setObjectName("loopPB");
        loopPB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/loop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loopPB->setIcon(icon3);
        loopPB->setIconSize(QSize(20, 20));
        loopPB->setCheckable(true);

        horizontalLayout_6->addWidget(loopPB);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        prePB = new QPushButton(widget_3);
        prePB->setObjectName("prePB");
        prePB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/prev.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        prePB->setIcon(icon4);
        prePB->setIconSize(QSize(20, 20));

        horizontalLayout_6->addWidget(prePB);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        StopPB = new QPushButton(widget_3);
        StopPB->setObjectName("StopPB");
        StopPB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        StopPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align : center;\n"
"	background : transparent; \n"
"	border-radius : 5 px;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	color: rgb(255, 255, 255);\n"
"	height : 40 px;\n"
"	padding-left:5px;\n"
"	border-radius:5px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/Icons/play-button-arrowhead.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon5.addFile(QString::fromUtf8(":/Icons/pause.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        StopPB->setIcon(icon5);
        StopPB->setIconSize(QSize(20, 20));
        StopPB->setCheckable(true);

        horizontalLayout_6->addWidget(StopPB);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_9);

        nextPB = new QPushButton(widget_3);
        nextPB->setObjectName("nextPB");
        nextPB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/Icons/next.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        nextPB->setIcon(icon6);
        nextPB->setIconSize(QSize(20, 20));

        horizontalLayout_6->addWidget(nextPB);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_10);

        shufflePB = new QPushButton(widget_3);
        shufflePB->setObjectName("shufflePB");
        shufflePB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/Icons/shuffle.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        shufflePB->setIcon(icon7);
        shufflePB->setIconSize(QSize(20, 20));
        shufflePB->setCheckable(true);

        horizontalLayout_6->addWidget(shufflePB);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);


        verticalLayout_6->addLayout(horizontalLayout_6);


        verticalLayout_5->addWidget(widget_3);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Music Player", nullptr));
        searchLE->setPlaceholderText(QCoreApplication::translate("MainWindow", "Search", nullptr));
        searchPB->setText(QString());
        searchBoxErrorLB->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Play Lists", nullptr));
        addPlayListPB->setText(QCoreApplication::translate("MainWindow", "Add Play List", nullptr));
        deletePlayListPB->setText(QCoreApplication::translate("MainWindow", "Delete PlayList", nullptr));
        musicL->setText(QCoreApplication::translate("MainWindow", "Musics", nullptr));
        addMusicPB->setText(QCoreApplication::translate("MainWindow", "Add Music", nullptr));
        deleteSongPB->setText(QCoreApplication::translate("MainWindow", "Delete Music", nullptr));
        songNameL->setText(QCoreApplication::translate("MainWindow", "song name", nullptr));
        loopPB->setText(QString());
        prePB->setText(QString());
        StopPB->setText(QString());
        nextPB->setText(QString());
        shufflePB->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
