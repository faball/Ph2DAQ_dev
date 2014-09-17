#ifndef SETUPTAB_H
#define SETUPTAB_H

#include <QWidget>
#include <QList>
#include <QStandardItemModel>

namespace Ui {
    class SetupTab;
}

namespace GUI {

    class SetupTab : public QWidget
    {
        Q_OBJECT

    public:
        explicit SetupTab(QWidget *parent);
        void setBeBoardId(const QList<QString> value);
        void setBoardType(const QString &value);
        void setShelveId(const QList<QString> value);//pass by value - QList is implicitly shared
        void setConnectionId(const QString &value);

        ~SetupTab();

        bool isCbc2Checked();
        void setHwTreeView(QStandardItemModel *model);
    public slots:
        void onStatusUpdate(const QString& statusMsg);

    private slots:

        void on_radio2CBC_clicked();

        void on_radio8CBC_clicked();

        void on_btnConfig_clicked();

    private:
        Ui::SetupTab *ui;
    };
}

#endif // SETUPTAB_H
