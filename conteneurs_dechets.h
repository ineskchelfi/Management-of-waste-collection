#ifndef CONTENEURS_DECHETS_H
#define CONTENEURS_DECHETS_H
#include<QString>
#include <QtSql>

class Conteneurs_dechets
{
private :
    int id_cont;
    int max_occup_cont;
    int val_notif_cont;
    int val_occup_cont;
public:
    Conteneurs_dechets();
    int get_id_cont();
    int get_max_occup_cont();
    int get_val_notif_cont();
    int get_val_occup_cont();

    void set_id_cont(int idcont);
    void set_max_occup_cont(int maxcont);
    void set_val_notif_cont(int notifcont);
    void set_val_occup_cont(int occupcont);
    QSqlDatabase mydb;
    void connClose();

    bool connOpen();
    void Save();
    void Delete();
    void UpDate();
    QSqlQueryModel * Load();


};

#endif // CONTENEURS_DECHETS_H
