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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *searchWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchLE;
    QPushButton *searchPB;
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
    QPushButton *deletePlayListPB;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QPushButton *pushButton;
    QScrollArea *songsSA;
    QWidget *scrollAreaWidgetContents_2;
    QPushButton *deleteSongPB;
    QWidget *widget_3;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QLabel *label_3;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(595, 638);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        searchWidget = new QWidget(centralwidget);
        searchWidget->setObjectName("searchWidget");
        searchWidget->setGeometry(QRect(0, 3, 591, 101));
        verticalLayout_2 = new QVBoxLayout(searchWidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        searchLE = new QLineEdit(searchWidget);
        searchLE->setObjectName("searchLE");

        horizontalLayout->addWidget(searchLE);

        searchPB = new QPushButton(searchWidget);
        searchPB->setObjectName("searchPB");

        horizontalLayout->addWidget(searchPB);


        verticalLayout->addLayout(horizontalLayout);

        searchBoxErrorLB = new QLabel(searchWidget);
        searchBoxErrorLB->setObjectName("searchBoxErrorLB");

        verticalLayout->addWidget(searchBoxErrorLB);


        verticalLayout_2->addLayout(verticalLayout);

        mianWidget = new QWidget(centralwidget);
        mianWidget->setObjectName("mianWidget");
        mianWidget->setGeometry(QRect(20, 100, 571, 311));
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
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 263, 237));
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
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 262, 237));
        songsSA->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_4->addWidget(songsSA);

        deleteSongPB = new QPushButton(widget_2);
        deleteSongPB->setObjectName("deleteSongPB");

        verticalLayout_4->addWidget(deleteSongPB);


        horizontalLayout_4->addWidget(widget_2);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        widget_3 = new QWidget(centralwidget);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(20, 420, 561, 111));
        pushButton_2 = new QPushButton(widget_3);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(80, 40, 80, 18));
        pushButton_3 = new QPushButton(widget_3);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(250, 40, 80, 18));
        pushButton_4 = new QPushButton(widget_3);
        pushButton_4->setObjectName("pushButton_4");
        pushButton_4->setGeometry(QRect(390, 40, 80, 18));
        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 10, 141, 16));
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
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "PushButton", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "song name", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
