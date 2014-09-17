#pragma once
#include <QObject>
#include <QVariantMap>

class QString;
class QStringListModel;
class QFile;

#include <QStandardItem>

namespace GUI{

    class Settings : public QObject
    {
        Q_OBJECT
    public:
        explicit Settings(QObject *parent, QString filename);
        void ParseJsondata();
        void fetchDefaultValues();

        //**TODO TIDY UP THIS
        QList <QString> getShelveId() const {return list_ShelveId;} //pass by value - QList is implicitly shared
        QList <QString> getBeId() const {return list_BeId;}
        QString getConnectionId() const {return m_connectionId;}
        QString getConnectionsName() const {return m_connectionsName;}
        QString getBoardType() const {return m_boardType;}
        //TIDY UP THIS**

        QVariantMap getshelveIdMap() const {return map_ShelveId;} //QVariantMaps are implicitly shared

        QStandardItemModel* getHwStandardItems() const {return m_HwStandardItems;}
        void CreateItemModel();


    signals:
        void notifyStatusMessage(QString msg);

    private:
        QString m_filename;
        QString m_connectionsName;
        QString m_connectionId;
        QString m_boardType;

        QVariantMap map_HwDescription;
        QVariantMap map_ShelveId;
        QVariantMap map_BeBoardId;

        QList <QString> list_ShelveId;
        QList <QString> list_BeId;

        QStandardItemModel* m_HwStandardItems;
        QList<QStandardItem *> prepareRow(const QString &first);

        QString ReadJsonFromInternalResource();
        QString ReadJsonFile();
        void SendStatusMessage(QString msg);

        QVariantMap GetJsonObject(const QString &rawJson);

        explicit Settings(const Settings& rhs) = delete;
        Settings& operator= (const Settings& rhs) = delete;
    };
}



