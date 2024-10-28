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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(515, 638);
        MainWindow->setCursor(QCursor(Qt::CursorShape::ArrowCursor));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        searchWidget = new QWidget(centralwidget);
        searchWidget->setObjectName("searchWidget");
        searchWidget->setGeometry(QRect(0, 3, 512, 70));
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MUSICPLAYER_H
