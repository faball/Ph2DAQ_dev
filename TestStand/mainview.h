#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include "../HWDescription/Cbc.h"
#include "../HWDescription/Module.h"
#include "../HWDescription/BeBoard.h"
#include "../HWInterface/CbcInterface.h"
#include "../HWInterface/BeBoardInterface.h"
#include "../HWDescription/Definition.h"
#include "../System/SystemController.h"

using namespace Ph2_HwDescription;
using namespace Ph2_HwInterface;
using namespace Ph2_System;

namespace Ui {
class MainView;
}

class MainView : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainView(QWidget *parent = 0);
    ~MainView();

private slots:
    void on_btnConfigure_clicked();

    void on_btnLaunchTest_clicked();


private:
    Ui::MainView *ui;
    SystemController cSystemController;
    void initialise();
};

#endif // MAINVIEW_H
