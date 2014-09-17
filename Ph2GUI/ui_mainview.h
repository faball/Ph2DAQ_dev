/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabMainView;
    QWidget *tabSetup;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *loSetup;
    QWidget *tabRegisters;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *loRegisters;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(400, 300);
        centralWidget = new QWidget(MainView);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        tabMainView = new QTabWidget(centralWidget);
        tabMainView->setObjectName(QString::fromUtf8("tabMainView"));
        tabSetup = new QWidget();
        tabSetup->setObjectName(QString::fromUtf8("tabSetup"));
        horizontalLayout = new QHBoxLayout(tabSetup);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loSetup = new QVBoxLayout();
        loSetup->setSpacing(6);
        loSetup->setObjectName(QString::fromUtf8("loSetup"));

        horizontalLayout->addLayout(loSetup);

        tabMainView->addTab(tabSetup, QString());
        tabRegisters = new QWidget();
        tabRegisters->setObjectName(QString::fromUtf8("tabRegisters"));
        horizontalLayout_2 = new QHBoxLayout(tabRegisters);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        loRegisters = new QVBoxLayout();
        loRegisters->setSpacing(6);
        loRegisters->setObjectName(QString::fromUtf8("loRegisters"));

        horizontalLayout_2->addLayout(loRegisters);

        tabMainView->addTab(tabRegisters, QString());

        verticalLayout_2->addWidget(tabMainView);

        MainView->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainView);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        MainView->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainView);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainView->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainView);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainView->setStatusBar(statusBar);

        retranslateUi(MainView);

        tabMainView->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", 0, QApplication::UnicodeUTF8));
        tabMainView->setTabText(tabMainView->indexOf(tabSetup), QApplication::translate("MainView", "Setup", 0, QApplication::UnicodeUTF8));
        tabMainView->setTabText(tabMainView->indexOf(tabRegisters), QApplication::translate("MainView", "Registers", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
