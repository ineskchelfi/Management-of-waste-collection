#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secdialog.h"
#include "admindialog.h"
#include <QVector>
#include "utilisateur.h"

#include <QtSql>
#include <QtDebug>
#include <QFileInfo>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:

    explicit MainWindow(QWidget *parent = 0);
        QVector <Utilisateur> liste_user ;
    ~MainWindow();


private slots:
    void on_pushButton_Login_clicked();

private:
    Ui::MainWindow *ui;
    AdminDialog *admindialog;
    secDialog *SecDialog;
};

#endif // MAINWINDOW_H
