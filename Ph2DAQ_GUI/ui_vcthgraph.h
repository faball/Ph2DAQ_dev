/********************************************************************************
** Form generated from reading UI file 'vcthgraph.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VCTHGRAPH_H
#define UI_VCTHGRAPH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_VcthGraph
{
public:

    void setupUi(QWidget *VcthGraph)
    {
        if (VcthGraph->objectName().isEmpty())
            VcthGraph->setObjectName(QString::fromUtf8("VcthGraph"));
        VcthGraph->resize(400, 300);

        retranslateUi(VcthGraph);

        QMetaObject::connectSlotsByName(VcthGraph);
    } // setupUi

    void retranslateUi(QWidget *VcthGraph)
    {
        VcthGraph->setWindowTitle(QApplication::translate("VcthGraph", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VcthGraph: public Ui_VcthGraph {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VCTHGRAPH_H
