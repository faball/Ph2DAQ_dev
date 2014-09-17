#pragma once
#include <QObject>

namespace GUI{

    class MainView;
    class SetupTab;
    class CbcRegistersTab;
    class SetupTabViewManager;
    class Settings;
    class SystemController;

    class Startup : public QObject
    {
        Q_OBJECT
    public:
        explicit Startup();
        void show() const ;

        ~Startup();
    private:
        SetupTab& m_setupTab;
        CbcRegistersTab& m_regTab;
        MainView& m_mainView;
        Settings* m_settings;
        SetupTabViewManager* m_setupTabVm;

        SystemController* m_systemController;

        explicit Startup(const Startup& rhs) = delete;
        Startup& operator= (const Startup& rhs) = delete;
    };
}

