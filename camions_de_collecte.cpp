#include "camions_de_collecte.h"
#include <QtSql>
#include "mainwindow.h"
#include <QMessageBox>

Camions_de_collecte::Camions_de_collecte()
{

}

int Camions_de_collecte :: get_id_cam()
{
    return id_cam;
}
int Camions_de_collecte :: get_max_occup_cam()
{
   return max_occup_cam;
}
int Camions_de_collecte ::get_val_occup_cam()
{
   return val_occup_cam;
}
void Camions_de_collecte :: set_id_cam(int idcam)
{
  id_cam=idcam;
}

void Camions_de_collecte :: set_max_occup_cam(int maxcam)
{
  max_occup_cam=maxcam;
}
void Camions_de_collecte :: set_val_occup_cam(int valcam)
{
  val_occup_cam=valcam;
}
QSqlDatabase database;
void Camions_de_collecte:: save()
{
   if (!connOpen())
{
    qDebug()<<"Failed to open the database";
    return;
}

else
   {
QSqlQuery qry;

 qry.prepare("insert into Camions_de_collecte (max_occup_cam,val_occup_cam) values (' "+QString::number(max_occup_cam)+"','"+QString::number(val_occup_cam)+"')");


if (qry.exec())
{
    qDebug()<<"Saved the database";
    connClose();
}
else
{
    qDebug()<<qry.lastError().text();
}
   }
}
void Camions_de_collecte::update()
{

    if(!connOpen())
            {
          qDebug()<<("Failed to open the Data Base");
          return;
            }
    connOpen();

    QSqlQuery qry;
    qry.prepare("update Camions_de_collecte set max_occup_cam='"+QString::number(max_occup_cam)+"', val_occup_cam='"+QString::number(val_occup_cam)+"' where Id_cam='"+QString::number(id_cam)+"'");
     if (qry.exec())
        {
          qDebug()<<("Database updated");
          connClose();
        }
     else
        {
          qDebug()<<qry.lastError().text();
        }


}
void Camions_de_collecte::supprimer()
{

    if(!connOpen())
               {
          qDebug()<<("Failed to open the Data Base");

               }
  connOpen();

  QSqlQuery qry;
  qry.prepare("Delete from Camions_de_collecte where Id_cam ='"+QString::number(id_cam)+"' ");

  if (qry.exec())
      {
       qDebug()<<("deleted");

          connClose();
           }
  else
    {

         qDebug()<<qry.lastError().text();
    }


}

void Camions_de_collecte::connClose()
{
   database.close();
   database.removeDatabase(QSqlDatabase::defaultConnection);

}

bool Camions_de_collecte:: connOpen()
{

   database=QSqlDatabase::addDatabase("QSQLITE");
   database.setDatabaseName("./database.db");
   if(!database.open()){
      qDebug()<<("Failed to open the database");
   return false;
   }
   else {
       qDebug()<<("Connected..");
       return true;
   }
}
QSqlQueryModel * Camions_de_collecte::load()
{
    QSqlQueryModel * modal=new QSqlQueryModel();
    connOpen();
    QSqlQuery * qry= new QSqlQuery(database);
    qry->prepare("select * from Camions_de_collecte");
    qry->exec();
    modal->setQuery(*qry);
    qDebug()<<modal->rowCount();
    connClose();
    return modal;
}


