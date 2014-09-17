/********************************************************************************
** Form generated from reading UI file 'cbcregisterstab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CBCREGISTERSTAB_H
#define UI_CBCREGISTERSTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QColumnView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QTableView>
#include <QtGui/QToolBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CbcRegistersTab
{
public:
    QHBoxLayout *horizontalLayout;
    QToolBox *toolBox;
    QWidget *toolTwo;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *loToolTwo;
    QWidget *toolOne;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *loToolOne;
    QColumnView *colOne;
    QTableView *tableOne;

    void setupUi(QWidget *CbcRegistersTab)
    {
        if (CbcRegistersTab->objectName().isEmpty())
            CbcRegistersTab->setObjectName(QString::fromUtf8("CbcRegistersTab"));
        CbcRegistersTab->resize(477, 474);
        horizontalLayout = new QHBoxLayout(CbcRegistersTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        toolBox = new QToolBox(CbcRegistersTab);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        toolTwo = new QWidget();
        toolTwo->setObjectName(QString::fromUtf8("toolTwo"));
        toolTwo->setGeometry(QRect(0, 0, 453, 382));
        verticalLayout = new QVBoxLayout(toolTwo);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loToolTwo = new QHBoxLayout();
        loToolTwo->setObjectName(QString::fromUtf8("loToolTwo"));

        verticalLayout->addLayout(loToolTwo);

        toolBox->addItem(toolTwo, QString::fromUtf8("Cbc Two"));
        toolOne = new QWidget();
        toolOne->setObjectName(QString::fromUtf8("toolOne"));
        toolOne->setGeometry(QRect(0, 0, 453, 382));
        verticalLayout_3 = new QVBoxLayout(toolOne);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        loToolOne = new QHBoxLayout();
        loToolOne->setObjectName(QString::fromUtf8("loToolOne"));
        colOne = new QColumnView(toolOne);
        colOne->setObjectName(QString::fromUtf8("colOne"));

        loToolOne->addWidget(colOne);

        tableOne = new QTableView(toolOne);
        tableOne->setObjectName(QString::fromUtf8("tableOne"));

        loToolOne->addWidget(tableOne);


        verticalLayout_3->addLayout(loToolOne);

        toolBox->addItem(toolOne, QString::fromUtf8("Cbc One"));

        horizontalLayout->addWidget(toolBox);


        retranslateUi(CbcRegistersTab);

        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(CbcRegistersTab);
    } // setupUi

    void retranslateUi(QWidget *CbcRegistersTab)
    {
        CbcRegistersTab->setWindowTitle(QApplication::translate("CbcRegistersTab", "Form", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(toolTwo), QApplication::translate("CbcRegistersTab", "Cbc Two", 0, QApplication::UnicodeUTF8));
        toolBox->setItemText(toolBox->indexOf(toolOne), QApplication::translate("CbcRegistersTab", "Cbc One", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class CbcRegistersTab: public Ui_CbcRegistersTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CBCREGISTERSTAB_H
