#include "setuptabviewmanager.h"
#include "View/setuptab.h"
#include "Model/settings.h"
#include <QDebug>

namespace GUI
{
    SetupTabViewManager::SetupTabViewManager(QObject *parent,
                                             SetupTab& tab,
                                             Settings& config) :
        QObject(parent),
        m_setupTab(tab)
    {
        WireMessages(config);
        config.ParseJsondata();
        //config.CreateItemModel();
        m_setupTab.setHwTreeView(config.getHwStandardItems());

    }

    void SetupTabViewManager::WireMessages(Settings& config)
    {
        connect(&config, SIGNAL(notifyStatusMessage(QString)), //for QT4
                &m_setupTab, SLOT(onStatusUpdate(QString)) );
    }



}
