#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QDebug>
#include<QFileInfo>

namespace Ui {
class AdminDialog;
}

class AdminDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AdminDialog(QWidget *parent = 0);
    ~AdminDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_load_clicked();

    void on_tableView_activated(const QModelIndex &index);

private:
    Ui::AdminDialog *ui;
};

#endif // ADMINDIALOG_H
