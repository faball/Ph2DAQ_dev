#ifndef MAINVIEW_H
#define MAINVIEW_H

#include <QMainWindow>
#include "View/setuptab.h"
#include "View/setuptab.h"

namespace Ui {
    class MainView;
}

namespace GUI{

    class SetupTab;
    class CbcRegistersTab;

    class MainView : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainView(QWidget *parent,
                          GUI::SetupTab &setup,
                          GUI::CbcRegistersTab &reg);
        ~MainView();

    private:
        Ui::MainView *ui;

    };
}

#endif // MAINVIEW_H
