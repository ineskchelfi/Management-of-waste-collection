#ifndef ADMINDIALOG_H
#define ADMINDIALOG_H

#include <QDialog>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>



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


    void on_Write_clicked();

    void on_Read_clicked();

    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_save_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_update_clicked();

    void on_pushButton_load_clicked();

    void on_pushButton_save_2_clicked();

    void on_pushButton_update_2_clicked();

    void on_pushButton_delete_2_clicked();

    void on_pushButton_load_2_clicked();

    void on_tableView_2_activated(const QModelIndex &index);

    void on_comboBox_currentIndexChanged(int index);

    void on_comboBox_2_currentIndexChanged(int index);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();
    
    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::AdminDialog *ui;
};

#endif // ADMINDIALOG_H
