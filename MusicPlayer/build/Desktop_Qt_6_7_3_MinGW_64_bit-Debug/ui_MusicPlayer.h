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
    QPushButton *deleteMusicPB;
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
    QPushButton *prevPB;
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
        MainWindow->resize(850, 900);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-image: url(:/Icons/a darker blue night sky background, size 850 _ 900 pixels (1).png);\n"
"}\n"
"\n"
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
        searchLE->setStyleSheet(QString::fromUtf8("QLineEdit {\n"
"    background-color: rgba(8, 0, 35, 0.8);\n"
"    color: white;\n"
"    border: 1px solid rgba(255, 255, 255, 0.3);\n"
"font: 11pt \"Playwrite DE Grund\";\n"
"    border-radius: 5px;\n"
"    padding: 4px;\n"
"}\n"
"\n"
"QLineEdit:focus {\n"
"    background-color: rgba(8, 0, 35, 1);\n"
"    border: 1px solid rgba(255, 255, 255, 0.6);\n"
"}\n"
""));

        horizontalLayout->addWidget(searchLE);

        searchPB = new QPushButton(searchWidget);
        searchPB->setObjectName("searchPB");
        searchPB->setStyleSheet(QString::fromUtf8("\n"
"\n"
"QPushButton {\n"
"	text-align : center;\n"
"\n"
"	border-radius : 5 px;\n"
"color: white;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgba(5, 0, 25, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
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
        addPlayListPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align : center;\n"
"	    background-color: rgba(8, 0, 35, 0.8);\n"
"	border-radius : 5 px;\n"
"color: white;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgba(5, 0, 25, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Icons/plus.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        addPlayListPB->setIcon(icon1);
        addPlayListPB->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(addPlayListPB);


        verticalLayout_3->addLayout(horizontalLayout_2);

        playListsSongsSA = new QScrollArea(widget);
        playListsSongsSA->setObjectName("playListsSongsSA");
        playListsSongsSA->setStyleSheet(QString::fromUtf8("QScrollArea {\n"
"	border-radius:5px;\n"
"	background: rgba(8, 0, 35, 204); \n"
"	border: transparent;\n"
"}\n"
""));
        playListsSongsSA->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 398, 579));
        scrollAreaWidgetContents->setStyleSheet(QString::fromUtf8("QWidget {	\n"
"	border:none;\n"
"	background: transparent;\n"
"}"));
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
        addMusicPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align : center;\n"
"	    background-color: rgba(8, 0, 35, 0.8);\n"
"	border-radius : 5 px;\n"
"color: white;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgba(5, 0, 25, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
        addMusicPB->setIcon(icon1);
        addMusicPB->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(addMusicPB);


        verticalLayout_4->addLayout(horizontalLayout_3);

        musicsSA = new QScrollArea(widget_2);
        musicsSA->setObjectName("musicsSA");
        musicsSA->setStyleSheet(QString::fromUtf8("QScrollArea { \n"
"	border-radius:5px;\n"
"	background: rgba(8, 0, 35, 204); \n"
"	border: transparent;\n"
"}"));
        musicsSA->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 398, 519));
        scrollAreaWidgetContents_2->setStyleSheet(QString::fromUtf8("QWidget {	\n"
"	border:none;\n"
"	background: transparent;\n"
"}"));
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

        deleteMusicPB = new QPushButton(widget_2);
        deleteMusicPB->setObjectName("deleteMusicPB");
        deleteMusicPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align : center;\n"
"	    background-color: rgba(8, 0, 35, 0.8);\n"
"	border-radius : 5 px;\n"
"color: white;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgba(5, 0, 25, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Icons/delete.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        deleteMusicPB->setIcon(icon2);
        deleteMusicPB->setIconSize(QSize(20, 20));

        verticalLayout_4->addWidget(deleteMusicPB);


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
        loopPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	text-align : center;\n"
"\n"
"	border-radius : 5 px;\n"
"color: white;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgba(5, 0, 25, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Icons/loop.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loopPB->setIcon(icon3);
        loopPB->setIconSize(QSize(20, 20));
        loopPB->setCheckable(true);

        horizontalLayout_6->addWidget(loopPB);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_7);

        prevPB = new QPushButton(widget_3);
        prevPB->setObjectName("prevPB");
        prevPB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        prevPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/Icons/prev.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        prevPB->setIcon(icon4);
        prevPB->setIconSize(QSize(20, 20));

        horizontalLayout_6->addWidget(prevPB);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_8);

        StopPB = new QPushButton(widget_3);
        StopPB->setObjectName("StopPB");
        StopPB->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        StopPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
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
        nextPB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
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
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
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
        shufflePB->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	border:none;\n"
"	background: transparent;\n"
"}\n"
"QPushButton {\n"
"	text-align : center;\n"
"\n"
"	border-radius : 5 px;\n"
"color: white;\n"
"	font: 9pt \"Playwrite DE Grund\";\n"
"	height : 40 px;\n"
"	border-radius:5px;\n"
"padding: 8px 16px;\n"
"}\n"
"QPushButton:hover {\n"
"	 background-color: rgba(8, 0, 35, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
"QPushButton:checked {\n"
"	background-color: rgba(5, 0, 25, 1); \n"
"	font: 700 9pt \"Playwrite DE Grund\";\n"
"}\n"
""));
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
        musicL->setText(QCoreApplication::translate("MainWindow", "Musics", nullptr));
        addMusicPB->setText(QCoreApplication::translate("MainWindow", "Add Music", nullptr));
        deleteMusicPB->setText(QCoreApplication::translate("MainWindow", "Delete Music", nullptr));
        songNameL->setText(QCoreApplication::translate("MainWindow", "song name", nullptr));
        loopPB->setText(QString());
        prevPB->setText(QString());
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
