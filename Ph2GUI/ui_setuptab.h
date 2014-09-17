/********************************************************************************
** Form generated from reading UI file 'setuptab.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETUPTAB_H
#define UI_SETUPTAB_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SetupTab
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *loSetupTab;
    QGroupBox *gbSetupTab;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *loMsgConfigBox;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *editMsgBox;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *loRadioButtons;
    QRadioButton *radio2CBC;
    QRadioButton *radio8CBC;
    QVBoxLayout *loPushButtons;
    QPushButton *btnLoad;
    QPushButton *btnInit;
    QPushButton *btnConfig;
    QSpacerItem *horizontalSpacer;
    QGroupBox *gbCBC;
    QVBoxLayout *verticalLayout_3;
    QTreeView *treeTest;

    void setupUi(QWidget *SetupTab)
    {
        if (SetupTab->objectName().isEmpty())
            SetupTab->setObjectName(QString::fromUtf8("SetupTab"));
        SetupTab->resize(934, 557);
        horizontalLayout = new QHBoxLayout(SetupTab);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        loSetupTab = new QVBoxLayout();
        loSetupTab->setObjectName(QString::fromUtf8("loSetupTab"));
        gbSetupTab = new QGroupBox(SetupTab);
        gbSetupTab->setObjectName(QString::fromUtf8("gbSetupTab"));
        verticalLayout_2 = new QVBoxLayout(gbSetupTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        loMsgConfigBox = new QHBoxLayout();
        loMsgConfigBox->setObjectName(QString::fromUtf8("loMsgConfigBox"));
        groupBox_2 = new QGroupBox(gbSetupTab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_3 = new QHBoxLayout(groupBox_2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        editMsgBox = new QTextEdit(groupBox_2);
        editMsgBox->setObjectName(QString::fromUtf8("editMsgBox"));

        horizontalLayout_3->addWidget(editMsgBox);

        groupBox = new QGroupBox(groupBox_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        loRadioButtons = new QVBoxLayout();
        loRadioButtons->setObjectName(QString::fromUtf8("loRadioButtons"));
        radio2CBC = new QRadioButton(groupBox);
        radio2CBC->setObjectName(QString::fromUtf8("radio2CBC"));
        radio2CBC->setChecked(true);

        loRadioButtons->addWidget(radio2CBC);

        radio8CBC = new QRadioButton(groupBox);
        radio8CBC->setObjectName(QString::fromUtf8("radio8CBC"));

        loRadioButtons->addWidget(radio8CBC);


        verticalLayout->addLayout(loRadioButtons);

        loPushButtons = new QVBoxLayout();
#ifndef Q_OS_MAC
        loPushButtons->setSpacing(-1);
#endif
        loPushButtons->setObjectName(QString::fromUtf8("loPushButtons"));
        btnLoad = new QPushButton(groupBox);
        btnLoad->setObjectName(QString::fromUtf8("btnLoad"));

        loPushButtons->addWidget(btnLoad);

        btnInit = new QPushButton(groupBox);
        btnInit->setObjectName(QString::fromUtf8("btnInit"));
        btnInit->setEnabled(false);

        loPushButtons->addWidget(btnInit);

        btnConfig = new QPushButton(groupBox);
        btnConfig->setObjectName(QString::fromUtf8("btnConfig"));
        btnConfig->setEnabled(false);

        loPushButtons->addWidget(btnConfig);


        verticalLayout->addLayout(loPushButtons);


        horizontalLayout_3->addWidget(groupBox, 0, Qt::AlignTop);


        loMsgConfigBox->addWidget(groupBox_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        loMsgConfigBox->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(loMsgConfigBox);

        gbCBC = new QGroupBox(gbSetupTab);
        gbCBC->setObjectName(QString::fromUtf8("gbCBC"));
        gbCBC->setFlat(false);
        gbCBC->setCheckable(false);
        verticalLayout_3 = new QVBoxLayout(gbCBC);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        treeTest = new QTreeView(gbCBC);
        treeTest->setObjectName(QString::fromUtf8("treeTest"));
        treeTest->setAutoFillBackground(false);
        treeTest->setSortingEnabled(true);
        treeTest->setAnimated(true);
        treeTest->header()->setVisible(false);

        verticalLayout_3->addWidget(treeTest);


        verticalLayout_2->addWidget(gbCBC);


        loSetupTab->addWidget(gbSetupTab);


        horizontalLayout->addLayout(loSetupTab);


        retranslateUi(SetupTab);

        QMetaObject::connectSlotsByName(SetupTab);
    } // setupUi

    void retranslateUi(QWidget *SetupTab)
    {
        SetupTab->setWindowTitle(QApplication::translate("SetupTab", "Form", 0, QApplication::UnicodeUTF8));
        gbSetupTab->setTitle(QString());
        groupBox_2->setTitle(QApplication::translate("SetupTab", "Status", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QString());
        radio2CBC->setText(QApplication::translate("SetupTab", "2CBC", 0, QApplication::UnicodeUTF8));
        radio8CBC->setText(QApplication::translate("SetupTab", "8CBC", 0, QApplication::UnicodeUTF8));
        btnLoad->setText(QApplication::translate("SetupTab", "Load Settings", 0, QApplication::UnicodeUTF8));
        btnInit->setText(QApplication::translate("SetupTab", "Initialise Hw", 0, QApplication::UnicodeUTF8));
        btnConfig->setText(QApplication::translate("SetupTab", "Configure Hw", 0, QApplication::UnicodeUTF8));
        gbCBC->setTitle(QApplication::translate("SetupTab", "Hardware Setup", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SetupTab: public Ui_SetupTab {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETUPTAB_H
