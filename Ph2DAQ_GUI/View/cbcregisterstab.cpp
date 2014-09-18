#include "cbcregisterstab.h"
#include "ui_cbcregisterstab.h"

namespace GUI {

    CbcRegistersTab::CbcRegistersTab(QWidget *parent) :
        QWidget(parent),
        ui(new Ui::CbcRegistersTab)
    {
        ui->setupUi(this);
        startup();
    }

    CbcRegistersTab::~CbcRegistersTab()
    {
        delete ui;
    }

    void CbcRegistersTab::startup()
    {
        model = new QStandardItemModel(4,2,this);
        ui->tableOne->setModel(model);

        for(int row = 0; row < 4; row++)
            {
                for(int col = 0; col < 2; col++)
                {
                    QModelIndex index = model->index(row,col,QModelIndex());
                    // 0 for all data
                    model->setData(index,0);
                }
            }

    }
}
