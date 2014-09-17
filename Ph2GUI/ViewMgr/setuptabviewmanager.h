#pragma once
#include <QObject>

#include <QStandardItemModel>

namespace GUI{
    class SetupTab;
    class Settings;

    class SetupTabViewManager : public QObject
    {
        Q_OBJECT
    public:
        explicit SetupTabViewManager(QObject *parent,
                                     SetupTab& tab,
                                     Settings& config);
        //~SetupTabViewManager();


    signals:
        void notifyStatusUpdated(const QString& value);

    private:

        SetupTab& m_setupTab;

        void WireMessages(Settings &config);

        explicit SetupTabViewManager(const SetupTabViewManager& rhs) = delete;
        SetupTabViewManager& operator= (const SetupTabViewManager& rhs) = delete;
    };
}



