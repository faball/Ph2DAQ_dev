#include "mainview.h"
#include "ui_mainview.h"
#include "View/setuptab.h"
#include "View/cbcregisterstab.h"

namespace GUI{

    MainView::MainView(QWidget *parent,
                       SetupTab& setup,
                       CbcRegistersTab& regTab) :
        QMainWindow(parent),
        ui(new Ui::MainView)
    {
        ui->setupUi(this);
        ui->loSetup->addWidget(&setup);
        ui->loRegisters->addWidget(&regTab);
    }

    MainView::~MainView()
    {
        delete ui;
    }
}
