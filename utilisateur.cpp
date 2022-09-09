#include "utilisateur.h"
#include <QMessageBox>
#include <QTextStream>
#include <QString>
Utilisateur::Utilisateur()
{
   username="";
   password="";
   role="";
}
 QString Utilisateur :: get_username()
 {
     return username;
 }
QString Utilisateur :: get_password()
{
    return password;
}
QString Utilisateur ::get_role()
{
    return role;
}
void Utilisateur:: set_username( QString U)
{
    username=U;
}
void Utilisateur :: set_password(QString P)
{
    password=P;
}
void Utilisateur :: set_role(QString R)
{
    role=R;
}
