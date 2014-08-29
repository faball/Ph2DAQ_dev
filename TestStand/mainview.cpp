#include "mainview.h"
#include "ui_mainview.h"

#include "../HWDescription/Cbc.h"
#include "../HWDescription/Module.h"
#include "../HWDescription/BeBoard.h"
#include "../HWInterface/CbcInterface.h"
#include "../HWInterface/BeBoardInterface.h"
#include "../HWDescription/Definition.h"
#include "../System/SystemController.h"

#include <boost/format.hpp>
#include <TH1F.h>
#include <TCanvas.h>
#include <TStyle.h>
#include <TApplication.h>
#include <TROOT.h>

#include "../HWDescription/Cbc.h"
#include "../HWDescription/Module.h"
#include "../HWDescription/BeBoard.h"
#include "../HWInterface/CbcInterface.h"
#include "../HWInterface/BeBoardInterface.h"
#include "../HWDescription/Definition.h"
#include "../tools/Calibration.h"
#include <TApplication.h>

using namespace Ph2_HwDescription;
using namespace Ph2_HwInterface;
using namespace Ph2_System;

MainView::MainView(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainView)
{
    ui->setupUi(this);

    initialise();
}

MainView::~MainView()
{
    delete ui;
}

void MainView::initialise(){
    ui->btnConfigure->setEnabled(true);
    ui->btnLaunchTest->setEnabled(false);

}

void MainView::on_btnConfigure_clicked()
{
    ui->btnConfigure->setEnabled(false);

    cSystemController.InitializeHw(XML_DESCRIPTION_FILE_2CBC);
    cSystemController.ConfigureHw();

    ui->btnLaunchTest->setEnabled(true);


}

void MainView::on_btnLaunchTest_clicked()
{
    ui->btnLaunchTest->setEnabled(false);

    Calibration cCalibration("testfile.root");
    cCalibration.InitializeHw("settings/HWDescription_2CBC.xml");
    cCalibration.InitializeSettings("settings/HWDescription_2CBC.xml");
    cCalibration.InitialiseTestGroup();
    cCalibration.ConfigureHw();
    cCalibration.VplusScan();

    // cCalibration.FitVplusVcth(true,0x78);


    ui->btnConfigure->setEnabled(true);
}

