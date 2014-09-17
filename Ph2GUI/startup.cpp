#include "startup.h"
#include "View/mainview.h"
#include "View/setuptab.h"
#include "View/cbcregisterstab.h"
#include "Model/settings.h"
#include "provider.h"
#include "ViewMgr/setuptabviewmanager.h"
#include "Model/systemcontroller.h"


namespace GUI
{
    Startup::Startup() :
        QObject(nullptr),
        m_setupTab(*new SetupTab(nullptr)),
        m_regTab(*new CbcRegistersTab(nullptr)),
        m_mainView(*new MainView(nullptr, m_setupTab, m_regTab)),
        m_setupTabVm(new SetupTabViewManager(this,
                                                 m_setupTab,
                                                 Provider::getSettingsAsSingleton())),
        m_systemController(new SystemController(this,
                           Provider::getSettingsAsSingleton()))

    {
        m_systemController->InitialiseHw();
        m_systemController->ConfigureHw();
        m_systemController->fCbcInterface->WriteCbcReg(m_systemController->fShelveVec[0]->getBoard(0)->getModule(0)->getCbc(0),"VCth",0x03);
    }

    Startup::~Startup(){
        //Utils::DestructorMsg(this);
        delete &m_mainView;
    }

    void Startup::show() const{
        m_mainView.show();
    }
}
