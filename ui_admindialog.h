/********************************************************************************
** Form generated from reading UI file 'admindialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG_H
#define UI_ADMINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AdminDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QTabWidget *Vider;
    QWidget *tab;
    QLabel *Bienvenue;
    QLabel *label_pic2;
    QWidget *tab_2;
    QPushButton *Write;
    QPushButton *Read;
    QPlainTextEdit *plainTextEdit;
    QWidget *tab_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_save;
    QPushButton *pushButton_update;
    QPushButton *pushButton_delete;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QPushButton *pushButton_load;
    QLabel *label_Statut;
    QPushButton *pushButton_3;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label;
    QLineEdit *lineEdit;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QWidget *tab_6;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QLabel *label_10;
    QComboBox *comboBox;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_9;
    QLineEdit *lineEdit_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_11;
    QComboBox *comboBox_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_13;
    QLineEdit *lineEdit_notif_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_14;
    QLineEdit *lineEdit_ocup_max_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_12;
    QLineEdit *lineEdit_val_occup_2;
    QPushButton *pushButton_4;
    QWidget *tab_5;
    QWidget *layoutWidget4;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *lineEdit_occup_max;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_notif;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_Id_cont;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_val_occup;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *pushButton_save_2;
    QPushButton *pushButton_update_2;
    QPushButton *pushButton_delete_2;
    QPushButton *pushButton_2;
    QWidget *layoutWidget5;
    QVBoxLayout *verticalLayout_6;
    QTableView *tableView_2;
    QPushButton *pushButton_load_2;
    QWidget *tab_3;
    QLabel *label_15;
    QLabel *label_16;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QStringLiteral("AdminDialog"));
        AdminDialog->resize(773, 390);
        verticalLayout_3 = new QVBoxLayout(AdminDialog);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Vider = new QTabWidget(AdminDialog);
        Vider->setObjectName(QStringLiteral("Vider"));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        Bienvenue = new QLabel(tab);
        Bienvenue->setObjectName(QStringLiteral("Bienvenue"));
        Bienvenue->setGeometry(QRect(100, 10, 151, 21));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        Bienvenue->setFont(font);
        label_pic2 = new QLabel(tab);
        label_pic2->setObjectName(QStringLiteral("label_pic2"));
        label_pic2->setGeometry(QRect(25, 50, 301, 131));
        Vider->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        Write = new QPushButton(tab_2);
        Write->setObjectName(QStringLiteral("Write"));
        Write->setEnabled(false);
        Write->setGeometry(QRect(0, 170, 181, 31));
        Read = new QPushButton(tab_2);
        Read->setObjectName(QStringLiteral("Read"));
        Read->setGeometry(QRect(180, 170, 181, 31));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(0, 0, 361, 171));
        Vider->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 221, 399, 30));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_save = new QPushButton(layoutWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setEnabled(false);

        horizontalLayout_2->addWidget(pushButton_save);

        pushButton_update = new QPushButton(layoutWidget);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));
        pushButton_update->setEnabled(true);

        horizontalLayout_2->addWidget(pushButton_update);

        pushButton_delete = new QPushButton(layoutWidget);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));
        pushButton_delete->setEnabled(true);

        horizontalLayout_2->addWidget(pushButton_delete);

        layoutWidget1 = new QWidget(tab_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(457, 10, 271, 311));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tableView = new QTableView(layoutWidget1);
        tableView->setObjectName(QStringLiteral("tableView"));

        verticalLayout->addWidget(tableView);

        pushButton_load = new QPushButton(layoutWidget1);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));

        verticalLayout->addWidget(pushButton_load);

        label_Statut = new QLabel(tab_4);
        label_Statut->setObjectName(QStringLiteral("label_Statut"));
        label_Statut->setGeometry(QRect(20, 310, 211, 16));
        pushButton_3 = new QPushButton(tab_4);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(21, 254, 399, 26));
        layoutWidget2 = new QWidget(tab_4);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 30, 391, 161));
        verticalLayout_8 = new QVBoxLayout(layoutWidget2);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QStringLiteral("horizontalLayout_15"));
        label = new QLabel(layoutWidget2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_15->addWidget(label);

        lineEdit = new QLineEdit(layoutWidget2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(false);

        horizontalLayout_15->addWidget(lineEdit);


        verticalLayout_8->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QStringLiteral("horizontalLayout_16"));
        label_2 = new QLabel(layoutWidget2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_16->addWidget(label_2);

        lineEdit_2 = new QLineEdit(layoutWidget2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        horizontalLayout_16->addWidget(lineEdit_2);


        verticalLayout_8->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QStringLiteral("horizontalLayout_17"));
        label_3 = new QLabel(layoutWidget2);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_17->addWidget(label_3);

        lineEdit_3 = new QLineEdit(layoutWidget2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        horizontalLayout_17->addWidget(lineEdit_3);


        verticalLayout_8->addLayout(horizontalLayout_17);

        Vider->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        layoutWidget3 = new QWidget(tab_6);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(15, 10, 721, 261));
        horizontalLayout_14 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_14->setObjectName(QStringLiteral("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_10 = new QLabel(layoutWidget3);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout->addWidget(label_10);

        comboBox = new QComboBox(layoutWidget3);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        horizontalLayout->addWidget(comboBox);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        label_9 = new QLabel(layoutWidget3);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_12->addWidget(label_9);

        lineEdit_6 = new QLineEdit(layoutWidget3);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        horizontalLayout_12->addWidget(lineEdit_6);


        verticalLayout_5->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        label_8 = new QLabel(layoutWidget3);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_13->addWidget(label_8);

        lineEdit_4 = new QLineEdit(layoutWidget3);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        horizontalLayout_13->addWidget(lineEdit_4);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout_14->addLayout(verticalLayout_5);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_11 = new QLabel(layoutWidget3);
        label_11->setObjectName(QStringLiteral("label_11"));

        horizontalLayout_8->addWidget(label_11);

        comboBox_2 = new QComboBox(layoutWidget3);
        comboBox_2->setObjectName(QStringLiteral("comboBox_2"));

        horizontalLayout_8->addWidget(comboBox_2);


        verticalLayout_4->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_13 = new QLabel(layoutWidget3);
        label_13->setObjectName(QStringLiteral("label_13"));

        horizontalLayout_9->addWidget(label_13);

        lineEdit_notif_2 = new QLineEdit(layoutWidget3);
        lineEdit_notif_2->setObjectName(QStringLiteral("lineEdit_notif_2"));

        horizontalLayout_9->addWidget(lineEdit_notif_2);


        verticalLayout_4->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_14 = new QLabel(layoutWidget3);
        label_14->setObjectName(QStringLiteral("label_14"));

        horizontalLayout_10->addWidget(label_14);

        lineEdit_ocup_max_2 = new QLineEdit(layoutWidget3);
        lineEdit_ocup_max_2->setObjectName(QStringLiteral("lineEdit_ocup_max_2"));

        horizontalLayout_10->addWidget(lineEdit_ocup_max_2);


        verticalLayout_4->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_12 = new QLabel(layoutWidget3);
        label_12->setObjectName(QStringLiteral("label_12"));

        horizontalLayout_11->addWidget(label_12);

        lineEdit_val_occup_2 = new QLineEdit(layoutWidget3);
        lineEdit_val_occup_2->setObjectName(QStringLiteral("lineEdit_val_occup_2"));

        horizontalLayout_11->addWidget(lineEdit_val_occup_2);


        verticalLayout_4->addLayout(horizontalLayout_11);


        horizontalLayout_14->addLayout(verticalLayout_4);

        pushButton_4 = new QPushButton(tab_6);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(330, 300, 93, 28));
        Vider->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        layoutWidget4 = new QWidget(tab_5);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(10, 10, 401, 251));
        verticalLayout_2 = new QVBoxLayout(layoutWidget4);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget4);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        lineEdit_occup_max = new QLineEdit(layoutWidget4);
        lineEdit_occup_max->setObjectName(QStringLiteral("lineEdit_occup_max"));
        lineEdit_occup_max->setEnabled(false);

        horizontalLayout_6->addWidget(lineEdit_occup_max);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget4);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_notif = new QLineEdit(layoutWidget4);
        lineEdit_notif->setObjectName(QStringLiteral("lineEdit_notif"));

        horizontalLayout_4->addWidget(lineEdit_notif);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget4);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_Id_cont = new QLineEdit(layoutWidget4);
        lineEdit_Id_cont->setObjectName(QStringLiteral("lineEdit_Id_cont"));

        horizontalLayout_3->addWidget(lineEdit_Id_cont);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_val_occup = new QLineEdit(layoutWidget4);
        lineEdit_val_occup->setObjectName(QStringLiteral("lineEdit_val_occup"));

        horizontalLayout_5->addWidget(lineEdit_val_occup);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        pushButton_save_2 = new QPushButton(layoutWidget4);
        pushButton_save_2->setObjectName(QStringLiteral("pushButton_save_2"));
        pushButton_save_2->setEnabled(false);

        horizontalLayout_7->addWidget(pushButton_save_2);

        pushButton_update_2 = new QPushButton(layoutWidget4);
        pushButton_update_2->setObjectName(QStringLiteral("pushButton_update_2"));
        pushButton_update_2->setEnabled(true);

        horizontalLayout_7->addWidget(pushButton_update_2);

        pushButton_delete_2 = new QPushButton(layoutWidget4);
        pushButton_delete_2->setObjectName(QStringLiteral("pushButton_delete_2"));
        pushButton_delete_2->setEnabled(true);

        horizontalLayout_7->addWidget(pushButton_delete_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        pushButton_2 = new QPushButton(tab_5);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 280, 381, 28));
        layoutWidget5 = new QWidget(tab_5);
        layoutWidget5->setObjectName(QStringLiteral("layoutWidget5"));
        layoutWidget5->setGeometry(QRect(440, 20, 291, 291));
        verticalLayout_6 = new QVBoxLayout(layoutWidget5);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        tableView_2 = new QTableView(layoutWidget5);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));

        verticalLayout_6->addWidget(tableView_2);

        pushButton_load_2 = new QPushButton(layoutWidget5);
        pushButton_load_2->setObjectName(QStringLiteral("pushButton_load_2"));

        verticalLayout_6->addWidget(pushButton_load_2);

        Vider->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        label_15 = new QLabel(tab_3);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(20, 30, 481, 51));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        label_15->setFont(font1);
        label_16 = new QLabel(tab_3);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(10, 70, 701, 161));
        QFont font2;
        font2.setPointSize(10);
        label_16->setFont(font2);
        Vider->addTab(tab_3, QString());

        verticalLayout_3->addWidget(Vider);


        retranslateUi(AdminDialog);

        Vider->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "Dialog", 0));
        Bienvenue->setText(QApplication::translate("AdminDialog", "Bienvenue", 0));
        label_pic2->setText(QString());
        Vider->setTabText(Vider->indexOf(tab), QApplication::translate("AdminDialog", "Bienvenue", 0));
        Write->setText(QApplication::translate("AdminDialog", "Write", 0));
        Read->setText(QApplication::translate("AdminDialog", "Read", 0));
        Vider->setTabText(Vider->indexOf(tab_2), QApplication::translate("AdminDialog", "Admin", 0));
        pushButton_save->setText(QApplication::translate("AdminDialog", "Save", 0));
        pushButton_update->setText(QApplication::translate("AdminDialog", "Update", 0));
        pushButton_delete->setText(QApplication::translate("AdminDialog", "Delete", 0));
        pushButton_load->setText(QApplication::translate("AdminDialog", "Load", 0));
        label_Statut->setText(QApplication::translate("AdminDialog", "[+]Statut", 0));
        pushButton_3->setText(QApplication::translate("AdminDialog", "Init", 0));
        label->setText(QApplication::translate("AdminDialog", "Id_cam", 0));
        label_2->setText(QApplication::translate("AdminDialog", "Max_occup_cam", 0));
        label_3->setText(QApplication::translate("AdminDialog", "Val_occup_cam", 0));
        Vider->setTabText(Vider->indexOf(tab_4), QApplication::translate("AdminDialog", "Camions de collecte", 0));
        label_10->setText(QApplication::translate("AdminDialog", "Id_cam ", 0));
        label_9->setText(QApplication::translate("AdminDialog", "Max_occup_cam", 0));
        label_8->setText(QApplication::translate("AdminDialog", "Val_occup_cam", 0));
        label_11->setText(QApplication::translate("AdminDialog", "Id conteneur", 0));
        label_13->setText(QApplication::translate("AdminDialog", "Seuil de notification", 0));
        label_14->setText(QApplication::translate("AdminDialog", "Occupation maximale", 0));
        label_12->setText(QApplication::translate("AdminDialog", "Valeur d\342\200\231occupation", 0));
        pushButton_4->setText(QApplication::translate("AdminDialog", "Vider", 0));
        Vider->setTabText(Vider->indexOf(tab_6), QApplication::translate("AdminDialog", "Vider", 0));
        label_6->setText(QApplication::translate("AdminDialog", "Occupation maximale", 0));
        label_5->setText(QApplication::translate("AdminDialog", "Seuil de notification", 0));
        label_4->setText(QApplication::translate("AdminDialog", "Id conteneur", 0));
        label_7->setText(QApplication::translate("AdminDialog", "Valeur d\342\200\231occupation", 0));
        pushButton_save_2->setText(QApplication::translate("AdminDialog", "Save", 0));
        pushButton_update_2->setText(QApplication::translate("AdminDialog", "Update", 0));
        pushButton_delete_2->setText(QApplication::translate("AdminDialog", "Delete", 0));
        pushButton_2->setText(QApplication::translate("AdminDialog", "Init", 0));
        pushButton_load_2->setText(QApplication::translate("AdminDialog", "Load", 0));
        Vider->setTabText(Vider->indexOf(tab_5), QApplication::translate("AdminDialog", "conteneurs_dechets", 0));
        label_15->setText(QApplication::translate("AdminDialog", "Gestion de collection de d\303\251chets", 0));
        label_16->setText(QApplication::translate("AdminDialog", "D\303\251velopper une application graphique permettant de g\303\251rer un syst\303\250me de collecte de d\303\251chets\n"
"dans une ville intelligente. Cette application permet de g\303\251rer (Ajouter, modifier, supprimer et\n"
"afficher) les conteneurs de d\303\251chets et les camions de collecte .", 0));
        Vider->setTabText(Vider->indexOf(tab_3), QApplication::translate("AdminDialog", "A propos", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG_H
