#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QPixmap>
#include <QFile>
#include <QTextStream>
#include "utilisateur.h"
#include <QVector>
#include "mainwindow.h"

int trouve=0;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    QPixmap pix("./enit-logo (2).jpg");
    int w = ui->label_pic->width();
    int h = ui->label_pic->height();
    ui->label_pic->setPixmap(pix.scaled(w,h,Qt::KeepAspectRatio));



}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_Login_clicked()
{
   /* QString Username = ui-> lineEdit_username->text();
    QString Password = ui-> lineEdit_password->text();

    if ( ui->radioButton_2->isChecked())
    {
    if(Username == "test" && Password == "testuser"  ) {
        QMessageBox :: information(this,"Login","Username and password is correct");
        //hide();
        userDialog = new secDialog(this);
        userDialog->show();
     }
       else {
        QMessageBox :: warning(this,"Login","Username and password is not correct");
    }
    }


    if (ui->radioButton->isChecked())
    {
    if (Username == "test" && Password == "testadmin" )
    {
        QMessageBox :: information(this,"Login","Username and password is correct");
              hide();
             admindialog =new AdminDialog(this);
             admindialog->show();
             }
        else {
      QMessageBox :: warning(this,"Login","Username and password is not correct");
     }
    }
}
*/
    QFile file("./MP.txt");
    if (!file.open(QFile::ReadOnly | QFile::Text))
    {
        QMessageBox::warning(this,"title","file not open");

    }
    else
    {
        QString line;
        QTextStream stream(&file);
        while(!stream.atEnd())
        {
            line=stream.readLine();

            QRegExp rx("\\ |\\t");
            QStringList list=line.split(rx);

            Utilisateur u ;
            u.set_username(list.at(0));
            u.set_password(list.at(1));
            u.set_role(list.at(2));
            liste_user.push_back(u);
       }
        file.flush();
        file.close();
    }
    Utilisateur u;
       u.set_username(ui->lineEdit_username->text());
       u.set_password(ui->lineEdit_password->text());
       /*
       if(!database.isOpen()) {
           qDebug()<<("Failed to open the database");
           return;
       }
       connopen();
       QSqlQuery qry ;
       qry.prepare();
       */



        QString role="";
        trouve=0;
        if(ui->radioButton_admin->isChecked())
            role="admin";
        if(ui->radiobutton_user->isChecked())
                role="utilisateur";

      for(int i=0;i<liste_user.size();i++)
      {
          if (ui->radioButton_admin->isChecked())
          {
              if(u.get_username()==liste_user[i].get_username() &&
                      u.get_password()==liste_user[i].get_password() &&
                      liste_user[i].get_role()=="admin")
              {
                  trouve=1;
              QMessageBox::information(this,"login","You are in the admin zone");
                      hide();
              admindialog = new AdminDialog(this);
              admindialog->show();
              break;


              }

          }
          if(ui->radiobutton_user->isChecked())
          { if(u.get_username()==liste_user[i].get_username() && u.get_password()==liste_user[i].get_password() && liste_user[i].get_role()=="user")

           {
              trouve=1;
              QMessageBox::information(this,"Login","You are in the user zone");
              hide();
              SecDialog = new secDialog(this);
              SecDialog->show();
              break;


           }
          }
      }
      if (trouve==0) {
          QMessageBox::warning(this,"Login","username and password are not correct");
      }
}










