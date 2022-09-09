#include "conteneurs_dechets.h"
#include<QMessageBox>
#include<QFile>
#include<QTextStream>

Conteneurs_dechets CONT;
 QSqlDatabase mydb;
Conteneurs_dechets::Conteneurs_dechets()
{


}

void Conteneurs_dechets:: connClose()
{

    mydb.close();
    mydb.removeDatabase(QSqlDatabase::defaultConnection);
}

bool Conteneurs_dechets:: connOpen()
    {
    mydb=QSqlDatabase::addDatabase("QSQLITE");
    mydb.setDatabaseName("./database.db");

    if (!mydb.open())
    {
        qDebug()<<("failed to open database");
        return (false);
    }
    else
    {
        qDebug()<<("connected...");
        return(true);
}}


int Conteneurs_dechets ::get_id_cont()
 {
     return id_cont;
 }
int Conteneurs_dechets ::get_max_occup_cont()
 {
     return max_occup_cont;
 }
int Conteneurs_dechets ::get_val_notif_cont()
 {
     return val_notif_cont;
 }
int Conteneurs_dechets ::get_val_occup_cont()
 {
     return val_occup_cont;
 }

void Conteneurs_dechets::set_id_cont(int idcont)
{
    id_cont=idcont;
}
void Conteneurs_dechets::set_max_occup_cont(int maxcont)
{
    max_occup_cont=maxcont;
}
void Conteneurs_dechets::set_val_notif_cont(int notifcont)
{
    val_notif_cont=notifcont;
}
void Conteneurs_dechets::set_val_occup_cont(int occupcont)
{
    val_occup_cont=occupcont;
}
void Conteneurs_dechets::Save()
   {
     if (!connOpen())
     {
         qDebug()<<"failed to open the database";
          return;
     }
     else
         {

           QSqlQuery qry;
           qry.prepare("insert into conteneurs_dechets (max_occup_cont,val_notif_cont,val_occup_cont) values('"+ QString::number(max_occup_cont)+"','"+QString::number(val_notif_cont)+"','"+QString::number(val_occup_cont)+"')");

           if(qry.exec())
          {
               qDebug()<<"Saved";
               connClose();
           }
           else
           {
                qDebug()<<qry.lastError();

           }
            }
    }


void Conteneurs_dechets::Delete()
{


        if (!connOpen()){
            qDebug()<<"failed to open the database";
            return;
        }
        else
        {
        connOpen();
        QSqlQuery qry;
        qry.prepare("Delete from conteneurs_dechets where id_cont='"+QString::number(id_cont)+"'");

        if(qry.exec())
        {
            qDebug()<<"Deleted";
            connClose();
        }
        else
        {
            qDebug()<<qry.lastError();
        }
        }
}


void Conteneurs_dechets::UpDate()
{
    if (!connOpen()){
        qDebug()<<"failed to open the database";
        return;
    }
    connOpen();
    QSqlQuery qry;
qry.prepare("update conteneurs_dechets set max_occup_cont='"+QString::number( max_occup_cont)+"',val_notif_cont='"+QString::number(val_notif_cont)+"',val_occup_cont='"+QString::number(val_occup_cont)+"'where id_cont='"+QString::number(id_cont)+"'");

    if(qry.exec())
    {
        qDebug()<<"Updated";
        connClose();
    }
    else
    {
        qDebug()<<qry.lastError();
    }

}
QSqlQueryModel * Conteneurs_dechets::Load()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    connOpen();
    QSqlQuery * qry=new QSqlQuery(mydb);

    qry->prepare("select * from conteneurs_dechets");


    qry->exec();
    model->setQuery(*qry);

    qDebug() << (model->rowCount());
    connClose();
    return model;


}
