#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include <QString>
class Utilisateur
{ private :
    QString username ;
    QString password;
    QString role;
public:

    Utilisateur();

    QString get_username();
    QString get_password();
    QString get_role();
    void set_username(QString U);
    void set_password(QString P);
    void set_role(QString R);

};

#endif // UTILISATEUR_H
