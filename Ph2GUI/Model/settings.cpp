#include "settings.h"
#include <QString>
//#include <QJsonParseError>
//#include "/usr/include/qjson/QJsonParseError.h"
//#include <qjson>
#include <qjson/parser.h>
//#include <qjson/serializer.h>
//#include <QJsonObject>
/*#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonParseError>*/
#include <QStringListModel>
#include <QDebug>
#include <QDir>
#include <QVariantMap>
#include <QMessageBox>
#include <map>
#include <QList>

//#include <QJsonParser>


namespace GUI
{
    static auto RESOURCE_PREFIX = QString(":/json").toLatin1();
    Settings::Settings(QObject *parent, QString filename) :
        QObject(parent),
        m_filename (filename)
    {
    }

    void Settings::ParseJsondata()
    {

        QString raw_json = ReadJsonFile();
        if (raw_json.size()==0)
        {
            SendStatusMessage(tr("Json file empty or not formatted correctly"));
            return;
        }

        SendStatusMessage(tr("Settings file loaded"));

        auto result = GetJsonObject(raw_json);

        map_HwDescription = result["HwDescription"].toMap();

    }

    void Settings::fetchDefaultValues()
    {

        m_connectionsName = map_HwDescription["ConnectionsName"].toString();

        map_ShelveId = map_HwDescription["ShelveId"].toMap();

        if (map_ShelveId.keys().isEmpty())
        {
            SendStatusMessage(tr("Shelve ID container empty - error in JSON file"));
            return;
        }

        for(auto& kv : map_ShelveId.keys())
        {
            list_ShelveId << kv; //creates list for combobox
        }

        auto top_shelve_id = map_ShelveId.begin().key(); //gets first value for default

        map_BeBoardId = map_ShelveId.value(top_shelve_id).toMap().value("BeBoardId").toMap();

        if (map_BeBoardId.keys().isEmpty())
        {
            SendStatusMessage(tr("BeBoard ID container empty - error in JSON file"));
            return;
        }

        for (auto& kv : map_BeBoardId.keys())
        {
            list_BeId << kv;
        }

        auto top_be_id = map_BeBoardId.begin().key();

        m_connectionId = map_BeBoardId.value(top_be_id).toMap().value("connectionId").toString();
        m_boardType = map_BeBoardId.value(top_be_id).toMap().value("boardType").toString();

    }

    QString Settings::ReadJsonFile()
    {
        auto default_settings = ReadJsonFromInternalResource();
        return default_settings;
    }

    QVariantMap Settings::GetJsonObject(const QString& rawJson)
    {
        QJson::Parser parser;

        bool ok;
        QVariantMap result = parser.parse (rawJson.toLatin1(), &ok).toMap();
        if (!ok)
        {
            SendStatusMessage(tr("Could not parse JSON file ") );
        }

        return result;
    }

    //TODO tidy massively
    void Settings::CreateItemModel() { //yes I am aware there are faster ways with refelections but I'm pressed for time

        QStandardItemModel* standardModel = new QStandardItemModel;

        for(auto& sh_kv : map_ShelveId.keys())
        {
            QList<QStandardItem *> preparedRow = prepareRow("Shelve Id " + sh_kv);
            QStandardItem *item = standardModel->invisibleRootItem();
            item->appendRow(preparedRow);

            map_BeBoardId = map_ShelveId.value(sh_kv).toMap().value("BeBoardId").toMap();

            for (auto& be_kv: map_BeBoardId.keys())
            {
                QList<QStandardItem *> secondRow = prepareRow("Be Board Id " + be_kv);

                preparedRow.first()->appendRow(secondRow);

                for(auto& be_v : map_BeBoardId.value(be_kv).toMap().keys())
                {
                    auto be_values = map_BeBoardId.value(be_kv).toMap().value(be_v);

                    if(be_v == "RegisterName")
                    {
                        QList<QStandardItem *> thirdRow = prepareRow(be_v + " : " + be_values.toString());
                        secondRow.first()->appendRow(thirdRow);
                        auto regvalues = map_BeBoardId.value(be_kv).toMap().value(be_v);

                        for (auto& reg_kv: regvalues.toMap().keys())
                        {
                            QList<QStandardItem *> fourthRow = prepareRow(reg_kv + " : " + regvalues.toMap().value(reg_kv).toString());
                            thirdRow.first()->appendRow(fourthRow);
                        }
                    }

                    else if(be_v == "Module")
                    {
                        QList<QStandardItem *> thirdRow = prepareRow(be_v + " : " + be_values.toString());
                        secondRow.first()->appendRow(thirdRow);
                        auto regvalues = map_BeBoardId.value(be_kv).toMap().value(be_v);
                        for (auto& reg_kv: regvalues.toMap().keys())
                        {
                            if(reg_kv == "CbcRegisters")
                            {
                                QList<QStandardItem *> fourthRow = prepareRow(reg_kv);
                                thirdRow.first()->appendRow(fourthRow);

                                auto cbc_values =  regvalues.toMap().value(reg_kv).toMap();
                                for(auto& cbc_reg : cbc_values.keys())
                                {
                                    QList<QStandardItem *> fifthRow = prepareRow(cbc_reg + " : " + cbc_values.value(cbc_reg).toString());
                                    fourthRow.first()->appendRow(fifthRow);
                                }
                            }

                            else if(reg_kv == "CbcConfigFile")
                            {
                                QList<QStandardItem *> fourthRow = prepareRow(reg_kv);
                                thirdRow.first()->appendRow(fourthRow);
                                auto cbc_values =  regvalues.toMap().value(reg_kv).toList();

                                for (auto& config_kv : cbc_values)
                                {
                                    QList<QStandardItem *> fifthRow = prepareRow(config_kv.toString());
                                    fourthRow.first()->appendRow(fifthRow);
                                }
                            }

                            else
                            {
                                QList<QStandardItem *> fourthRow = prepareRow(reg_kv + " : " + regvalues.toMap().value(reg_kv).toString());
                                thirdRow.first()->appendRow(fourthRow);
                            }
                        }
                    }

                    else
                    {
                        QList<QStandardItem *> thirdRow = prepareRow(be_v + " : " + be_values.toString());
                        secondRow.first()->appendRow(thirdRow);
                    }


                }
            }
        }

        m_HwStandardItems = standardModel;
    }

    QList<QStandardItem *> Settings::prepareRow(const QString &first)
    {
        QList<QStandardItem *> rowItems;
        rowItems << new QStandardItem(first);
        return rowItems;
    }

    QString Settings::ReadJsonFromInternalResource()
    {
        QDir res_dir (RESOURCE_PREFIX);

        if (!res_dir.exists())
        {
            SendStatusMessage(tr("Internal resource path missing ") + res_dir.canonicalPath()); //connect to Notify
            return "";
        }
        auto path= res_dir.filePath(m_filename);
        QFile res_file(path);
        if(!res_file.open(QFile::ReadOnly|QFile::Text))
        {
            SendStatusMessage(tr("Could not open internal resource ") );//+ path);
            return ""; //flush
        }

        QString settings = res_file.readAll();
        return settings;
    }

    void Settings::SendStatusMessage(QString msg)
    {
        emit notifyStatusMessage(msg);
    }
}
