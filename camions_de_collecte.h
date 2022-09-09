#ifndef CAMIONS_DE_COLLECTE_H
#define CAMIONS_DE_COLLECTE_H
#include <QtSql>

class Camions_de_collecte
{ private :
    int id_cam;
    int max_occup_cam;
    int val_occup_cam;
    QSqlDatabase database;
public:
    Camions_de_collecte();

    int get_id_cam();
    int get_max_occup_cam();
    int get_val_occup_cam();
    void set_id_cam(int idcam);
    void set_max_occup_cam(int maxcam);
    void set_val_occup_cam(int valcam);

    void connClose();
    bool connOpen();
    void save();
    void supprimer();
    void update();
    QSqlQueryModel * load();


};

#endif // CAMIONS_DE_COLLECTE_H
