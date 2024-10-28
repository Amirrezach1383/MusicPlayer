/********************************************************************************
** Form generated from reading UI file 'MusicPlayer.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MUSICPLAYER_H
#define UI_MUSICPLAYER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
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
    QSpacerItem *verticalSpacer;
    QPushButton *deletePlayListPB;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QScrollArea *songsSA;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_8;
    QSpacerItem *verticalSpacer_2;
    QPushButton *deleteSongPB;
    QWidget *widget_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_6;
    QLabel *songNameL;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *loopPB;
    QPushButton *prePB;
    QPushButton *StopPB;
    QPushButton *nextPB;
    QPushButton *shufflePB;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(595, 638);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
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

        horizontalLayout_2->addWidget(addPlayListPB);


        verticalLayout_3->addLayout(horizontalLayout_2);

        playListsSongsSA = new QScrollArea(widget);
        playListsSongsSA->setObjectName("playListsSongsSA");
        playListsSongsSA->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 269, 421));
        verticalLayout_7 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalSpacer = new QSpacerItem(20, 406, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_7->addItem(verticalSpacer);

        playListsSongsSA->setWidget(scrollAreaWidgetContents);

        verticalLayout_3->addWidget(playListsSongsSA);

        deletePlayListPB = new QPushButton(widget);
        deletePlayListPB->setObjectName("deletePlayListPB");

        verticalLayout_3->addWidget(deletePlayListPB);


        horizontalLayout_4->addWidget(widget);

        widget_2 = new QWidget(mianWidget);
        widget_2->setObjectName("widget_2");
        verticalLayout_4 = new QVBoxLayout(widget_2);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_2 = new QLabel(widget_2);
        label_2->setObjectName("label_2");

        horizontalLayout_3->addWidget(label_2);

        pushButton = new QPushButton(widget_2);
        pushButton->setObjectName("pushButton");

        horizontalLayout_3->addWidget(pushButton);


        verticalLayout_4->addLayout(horizontalLayout_3);

        songsSA = new QScrollArea(widget_2);
        songsSA->setObjectName("songsSA");
        songsSA->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName("scrollAreaWidgetContents_2");
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 268, 421));
        verticalLayout_8 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalSpacer_2 = new QSpacerItem(20, 406, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        songsSA->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(songsSA);

        deleteSongPB = new QPushButton(widget_2);
        deleteSongPB->setObjectName("deleteSongPB");

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

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);

        loopPB = new QPushButton(widget_3);
        loopPB->setObjectName("loopPB");

        horizontalLayout_6->addWidget(loopPB);

        prePB = new QPushButton(widget_3);
        prePB->setObjectName("prePB");

        horizontalLayout_6->addWidget(prePB);

        StopPB = new QPushButton(widget_3);
        StopPB->setObjectName("StopPB");

        horizontalLayout_6->addWidget(StopPB);

        nextPB = new QPushButton(widget_3);
        nextPB->setObjectName("nextPB");

        horizontalLayout_6->addWidget(nextPB);

        shufflePB = new QPushButton(widget_3);
        shufflePB->setObjectName("shufflePB");

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
        searchPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        searchBoxErrorLB->setText(QString());
        label->setText(QCoreApplication::translate("MainWindow", "Play Lists", nullptr));
        addPlayListPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        deletePlayListPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Songs", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        deleteSongPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        songNameL->setText(QCoreApplication::translate("MainWindow", "song name", nullptr));
        loopPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        prePB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        StopPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        nextPB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        shufflePB->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
