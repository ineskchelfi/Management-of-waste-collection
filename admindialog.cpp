#include "admindialog.h"
#include "ui_admindialog.h"
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QFileDialog>
#include "mainwindow.h"
#include "camions_de_collecte.h"
#include "conteneurs_dechets.h"


    QString file_name=" ";
AdminDialog::AdminDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDialog)
{
    ui->setupUi(this);
    QPixmap pix("./enit-logo (2).jpg");
    int w = ui->label_pic2->width();
    int h = ui->label_pic2->height();
    ui->label_pic2->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));

    Camions_de_collecte C;
    QSqlQueryModel * modal=new QSqlQueryModel();
    modal=C.load();
     ui->comboBox->setModel(modal);
     Conteneurs_dechets B;
     QSqlQueryModel * modal1=new QSqlQueryModel();
     modal1=B.Load();
      ui->comboBox_2->setModel(modal1);





            if (!C.connOpen())
                ui->label_Statut->setText("Failed to open the database");
            else
                ui->label_Statut->setText("Connected to the database");
}

AdminDialog::~AdminDialog()
{
    delete ui;
}




void AdminDialog::on_Write_clicked()
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

void AdminDialog::on_Read_clicked()
{
    QString filter = "Text File (*.txt)";
      file_name = QFileDialog::getOpenFileName(this,"open a file","./",filter);
      QMessageBox :: information(this,"..",file_name);    QFile file(file_name);
        if (!file.open(QFile::ReadOnly | QFile::Text) ) {
            QMessageBox::warning(this,"title","file not open");
        }
        QTextStream in(&file);
        QString text =  in.readAll();
        ui->plainTextEdit->setPlainText(text);
        file.close();
        ui->Write->setEnabled(true);
}

void AdminDialog::on_pushButton_save_clicked()
{

     Camions_de_collecte C;

       C.set_max_occup_cam((ui->lineEdit_2->text()).toInt());
       C.set_val_occup_cam((ui->lineEdit_3->text()).toInt());
       C.save();

 }

void AdminDialog::on_pushButton_load_clicked()
{
   Camions_de_collecte C;

    QSqlQueryModel * modal=new QSqlQueryModel();
    modal=C.load();
     ui->tableView->setModel(modal);

}

void AdminDialog::on_tableView_activated(const QModelIndex &index)
{
    QString val=ui->tableView->model()->data(index).toString();

    Camions_de_collecte CC;
    if(!CC.connOpen())
    {
        qDebug()<<"Failed to open the database";
        return;
    }

   CC.connOpen();
   QSqlQuery qry;
   qry.prepare("select * from Camions_de_collecte where Id_cam='"+val+"' or max_occup_cam='"+val+"' or val_occup_cam='"+val+"' ");

   if(qry.exec())
   {
       while(qry.next())
       {
           ui->lineEdit->setText(qry.value(0).toString());
           ui->lineEdit_2->setText(qry.value(1).toString());
           ui->lineEdit_3->setText(qry.value(2).toString());

       }
       CC.connClose();
   }
   else
   {
       QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
   }
   ui->pushButton_save->setEnabled(false);
   ui->pushButton_delete->setEnabled(true);
   ui->pushButton_update->setEnabled(true);

}

void AdminDialog::on_pushButton_delete_clicked()
{
    Camions_de_collecte C;

      C.set_id_cam((ui->lineEdit->text()).toInt());
      C.supprimer();

}

void AdminDialog::on_pushButton_update_clicked()
{

    Camions_de_collecte C;
    C.set_id_cam((ui->lineEdit->text()).toInt());
    C.set_max_occup_cam((ui->lineEdit_2->text()).toInt());
    C.set_val_occup_cam((ui->lineEdit_3->text()).toInt());
    C.update();
}



void AdminDialog::on_pushButton_save_2_clicked()
{
    Conteneurs_dechets CONT;



        CONT.set_max_occup_cont((ui->lineEdit_occup_max->text()).toInt());
        CONT.set_val_notif_cont((ui->lineEdit_notif->text()).toInt());
        CONT.set_val_occup_cont((ui->lineEdit_val_occup->text()).toInt());

        CONT.Save();
}

void AdminDialog::on_pushButton_update_2_clicked()
{
    Conteneurs_dechets CONT;

    CONT.set_id_cont((ui->lineEdit_Id_cont->text()).toInt());
    CONT.set_max_occup_cont((ui->lineEdit_occup_max->text()).toInt());
    CONT.set_val_notif_cont((ui->lineEdit_notif->text()).toInt());
    CONT.set_val_occup_cont((ui->lineEdit_val_occup->text()).toInt());

    CONT.UpDate();
}

void AdminDialog::on_pushButton_delete_2_clicked()
{

    Conteneurs_dechets CONT;
    CONT.set_id_cont((ui->lineEdit_Id_cont->text()).toInt());
    CONT.Delete();
}

void AdminDialog::on_pushButton_load_2_clicked()
{
    Conteneurs_dechets CONT;
    QSqlQueryModel * model=new QSqlQueryModel();
         model=CONT.Load();
         ui->tableView_2->setModel(model);


        // qDebug()<<model->rowCount();
}

void AdminDialog::on_tableView_2_activated(const QModelIndex &index)
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
    ui->pushButton_save_2->setEnabled(false);
    ui->pushButton_delete_2->setEnabled(true);
    ui->pushButton_update_2->setEnabled(true);
}


void AdminDialog::on_comboBox_currentIndexChanged(int index)
{
    Camions_de_collecte CC;
    int idcam = ui->comboBox->currentText().toInt();

    if (!CC.connOpen())
 {
     qDebug()<<"Failed to open the database";
     return;
 }

 else
    {
        CC.connOpen();
        QSqlQuery qry;
        qry.prepare("select * from Camions_de_collecte where Id_cam='"+QString::number(idcam)+"'");


 if (qry.exec())
 {
     while (qry.next())
     {
        // ui->lineEdit->setText(qry.value(0).toString());
         ui->lineEdit_6->setText(qry.value(1).toString());
         ui->lineEdit_4->setText(qry.value(2).toString());
     }
     qDebug()<<"Saved the database";
     CC.connClose();
 }
 else
 {
     qDebug()<<qry.lastError().text();
 }
    }
}



void AdminDialog::on_comboBox_2_currentIndexChanged(int index)
{
    Conteneurs_dechets CC;
    int idcont = ui->comboBox_2->currentText().toInt();

    if (!CC.connOpen())
 {
     qDebug()<<"Failed to open the database";
     return;
 }

 else
    {
        CC.connOpen();
        QSqlQuery qry;
        qry.prepare("select * from conteneurs_dechets where id_cont='"+QString::number(idcont)+"'");


 if (qry.exec())
 {
     while (qry.next())
     {
         ui->lineEdit_ocup_max_2->setText(qry.value(1).toString());
         ui->lineEdit_notif_2->setText(qry.value(2).toString());
         ui->lineEdit_val_occup_2->setText(qry.value(3).toString());
     }
     qDebug()<<"Saved the database";
     CC.connClose();
 }
 else
 {
     qDebug()<<qry.lastError().text();
 }
    }
}



void AdminDialog::on_pushButton_2_clicked()
{
    ui->lineEdit_Id_cont->setText("");
        ui->lineEdit_val_occup_2->setText("");
        ui->lineEdit_ocup_max_2->setText("");
        ui->lineEdit_notif_2->setText("");


        ui->pushButton_save_2->setEnabled(true);
        ui->pushButton_delete_2->setEnabled(false);
        ui->pushButton_update_2->setEnabled(false);
}

void AdminDialog::on_pushButton_3_clicked()
{
    ui->lineEdit->setText("");
        ui->lineEdit_2->setText("");
        ui->lineEdit_3->setText("");

        ui->pushButton_save->setEnabled(true);
        ui->pushButton_delete->setEnabled(false);
        ui->pushButton_update->setEnabled(false);
}

void AdminDialog::on_pushButton_clicked()
{
    if( ui->lineEdit_val_occup_2->text().toInt()>=ui->lineEdit_notif_2->text().toInt())
       {    Conteneurs_dechets C;
           if(!C.connOpen()){

               qDebug()<<"Failed to open the database";
              // return;
           }
        else {
           C.connOpen();
           QSqlQuery qry;
           qry.prepare("select * from Camions_de_collecte where max_occup_cam - val_occup_cam <='"+QString::number(ui->lineEdit_val_occup_2->text().toInt()-ui->lineEdit_notif_2->text().toInt())+"'");

           if(qry.exec( ))
           {   if(qry.next())

                   qDebug()<<"::information(this,tr(vider),tr(vide))";
               else qDebug()<<"aucun camion disponible";


               C.connClose();
             }
           else
           {
               qDebug()<<"Erreur";
           }
           }
   }

}


void AdminDialog::on_pushButton_4_clicked()
{
        if( ui->lineEdit_val_occup_2->text().toInt()>=ui->lineEdit_notif_2->text().toInt())
           {    Conteneurs_dechets C;
               if(!C.connOpen()){

                   qDebug()<<"Failed to open the database";
                  // return;
               }
            else {
               C.connOpen();
               QSqlQuery qry;
               qry.prepare("select * from Camions_de_collecte where max_occup_cam - val_occup_cam <='"+QString::number(ui->lineEdit_val_occup_2->text().toInt()-ui->lineEdit_notif_2->text().toInt())+"'");

               if(qry.exec( ))
               {   if(qry.next())


                      { QMessageBox::information(this,tr("vider"),tr("vide"));



                       ui->lineEdit_4->setText((ui->lineEdit_val_occup->text())+(ui->lineEdit_4->text()));

                       ui->lineEdit_val_occup_2->setText("0");


                        }
                   else
                       QMessageBox::warning(this,tr("vider"),tr("aucun camion disponible"));


                   C.connClose();
                 }
               else
               {
                 QMessageBox::critical(this,tr("Error::"),qry.lastError().text());
               }
       }
    }
        else
            {
                QMessageBox::information(this,tr("Remplir"),tr("Conteneur Pas encore rempli"));
            }
    }
