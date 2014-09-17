#include "setuptab.h"
#include "ui_setuptab.h"

#include <QDebug>
#include <QVariantMap>

#include <QListView>

#include <QStandardItemModel>

namespace GUI{

    const int ROWS = 2;
    const int COLUMNS = 3;

    SetupTab::SetupTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::SetupTab)
    {
        ui->setupUi(this);
    }

    SetupTab::~SetupTab()
    {
        delete ui;
    }

    void SetupTab::setBeBoardId(const QList <QString> value)
    {
        ui->comboBeId->addItems(value);
    }

    void SetupTab::setBoardType(const QString &value)
    {
        ui->editBoardType->setText(value);
    }

    void SetupTab::setShelveId(const QList <QString> value)
    {
        ui->comboShelve->addItems(value);
    }

    void SetupTab::setConnectionId(const QString &value)
    {
        ui->editConnectionId->setText(value);
    }

    void SetupTab::setHwTreeView(QStandardItemModel* model)
    {
        ui->treeTest->setModel(model);
    }

    void SetupTab::onStatusUpdate(const QString &statusMsg)
    {
        ui->editMsgBox->append(statusMsg);
    }

    bool SetupTab::isCbc2Checked ()
    {
        return ui->radio2CBC->isChecked();
    }

    void SetupTab::on_radio2CBC_clicked()
    {
        ui->radio2CBC->toggle();
    }

    void SetupTab::on_radio8CBC_clicked()
    {
        ui->radio8CBC->toggle();
    }

    void SetupTab::on_btnConfig_clicked()
    {
        //
        return;
    }
}


