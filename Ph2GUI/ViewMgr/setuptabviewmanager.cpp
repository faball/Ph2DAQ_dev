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
        config.fetchDefaultValues();
        config.CreateItemModel();
        m_setupTab.setHwTreeView(config.getHwStandardItems());
        m_setupTab.setShelveId(config.getShelveId());
        m_setupTab.setConnectionId(config.getConnectionId());

        //m_setupTab.setBeBoardId(config.getBoardID());
        m_setupTab.setBeBoardId(config.getBeId());

        m_setupTab.setBoardType(config.getBoardType());
    }

    void SetupTabViewManager::WireMessages(Settings& config)
    {
        connect(&config, SIGNAL(notifyStatusMessage(QString)), //for QT4
                &m_setupTab, SLOT(onStatusUpdate(QString)) );
    }



}
