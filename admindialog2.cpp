#include "admindialog2.h"
#include"conteneurs_dechets.h"
#include <QPixmap>
#include <QFileDialog>
#include <QMessageBox>
#include<QFile>
#include<QTextStream>

  QString file_name =" ";



AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    QPixmap pix("./enit.jpg");
    int w= ui->label_2->width();
    int h= ui->label_2->height();
    ui->label_2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));


}


AdminDialog::~AdminDialog()
{
    delete ui;
}

void AdminDialog::on_pushButton_clicked()
{

   QFile file(file_name);

   if (!file.open(QFile::WriteOnly | QFile::Text) ) {
       QMessageBox::warning(this,"title","file not open");
   }
    QTextStream out(&file);
    QString text =  ui->plainTextEdit->toPlainText();
    out<< text ;
    file.flush();
    file.close();
}

void AdminDialog::on_pushButton_2_clicked()
{
    QString filter = " Text File (*.txt)";
    file_name = QFileDialog::getOpenFileName(this,"open a file","./",filter);
   QMessageBox :: information(this,"..",file_name);

   QFile file(file_name);


    if (!file.open(QFile::ReadOnly | QFile::Text) ) {
        QMessageBox::warning(this,"title","file not open");
    }
    QTextStream in(&file);
    QString text =  in.readAll();
    ui->plainTextEdit->setPlainText(text);
    file.close();
    ui->pushButton->setEnabled(true);
}

void AdminDialog::on_pushButton_save_clicked()
{
    Conteneurs_dechets CONT;



        CONT.set_max_occup_cont((ui->lineEdit_occup_max->text()).toInt());
        CONT.set_val_notif_cont((ui->lineEdit_notif->text()).toInt());
        CONT.set_val_occup_cont((ui->lineEdit_val_occup->text()).toInt());

        CONT.Save();
}

void AdminDialog::on_pushButton_update_clicked()
{
    Conteneurs_dechets CONT;

    CONT.set_id_cont((ui->lineEdit_Id_cont->text()).toInt());
    CONT.set_max_occup_cont((ui->lineEdit_occup_max->text()).toInt());
    CONT.set_val_notif_cont((ui->lineEdit_notif->text()).toInt());
    CONT.set_val_occup_cont((ui->lineEdit_val_occup->text()).toInt());

    CONT.UpDate();
}



void AdminDialog::on_pushButton_delete_clicked()
{
    Conteneurs_dechets CONT;
    CONT.set_id_cont((ui->lineEdit_Id_cont->text()).toInt());
    CONT.Delete();
}

void AdminDialog::on_pushButton_load_clicked()
{
    Conteneurs_dechets CONT;
    QSqlQueryModel * model=new QSqlQueryModel();
         model=CONT.Load();
         ui->tableView->setModel(model);


        // qDebug()<<model->rowCount();


}

void AdminDialog::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();
    Conteneurs_dechets CONT;
    if (!CONT.connOpen())
    {
        qDebug()<<"Failed to open data base";
        return;
    }
    CONT.connOpen();
    QSqlQuery qry;
    qry.prepare("select * from conteneurs_dechets where id_cont='"+val+"'or max_occup_cont='"+ val+"'or val_notif_cont='"+val+"'or val_occup_cont='"+val+"'");

    if (qry.exec())
    {
        while(qry.next())
        {
            ui->lineEdit_Id_cont->setText(qry.value(0).toString());
            ui->lineEdit_occup_max->setText(qry.value(1).toString());
            ui->lineEdit_notif->setText(qry.value(2).toString());
            ui->lineEdit_val_occup->setText(qry.value(3).toString());
        }
        CONT.connClose();
    }
    else
    {
        QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
    }
}
