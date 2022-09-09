/********************************************************************************
** Form generated from reading UI file 'admindialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINDIALOG2_H
#define UI_ADMINDIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label;
    QLabel *label_2;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QWidget *tab_4;
    QLabel *label_6;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEdit_Id_cont;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *lineEdit_occup_max;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *lineEdit_notif;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *lineEdit_val_occup;
    QTableView *tableView;
    QPushButton *pushButton_load;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_save;
    QPushButton *pushButton_update;
    QPushButton *pushButton_delete;
    QWidget *tab_3;

    void setupUi(QDialog *AdminDialog)
    {
        if (AdminDialog->objectName().isEmpty())
            AdminDialog->setObjectName(QStringLiteral("AdminDialog"));
        AdminDialog->resize(604, 471);
        tabWidget = new QTabWidget(AdminDialog);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 591, 461));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        label = new QLabel(tab);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 20, 151, 41));
        QFont font;
        font.setFamily(QStringLiteral("Roman"));
        font.setPointSize(20);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(tab);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 80, 191, 161));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(tab_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButton = new QPushButton(tab_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setEnabled(false);

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_2->addLayout(verticalLayout);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        label_6 = new QLabel(tab_4);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(470, 390, 91, 21));
        layoutWidget = new QWidget(tab_4);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(9, 18, 291, 221));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEdit_Id_cont = new QLineEdit(layoutWidget);
        lineEdit_Id_cont->setObjectName(QStringLiteral("lineEdit_Id_cont"));

        horizontalLayout_2->addWidget(lineEdit_Id_cont);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEdit_occup_max = new QLineEdit(layoutWidget);
        lineEdit_occup_max->setObjectName(QStringLiteral("lineEdit_occup_max"));

        horizontalLayout_3->addWidget(lineEdit_occup_max);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        lineEdit_notif = new QLineEdit(layoutWidget);
        lineEdit_notif->setObjectName(QStringLiteral("lineEdit_notif"));

        horizontalLayout_4->addWidget(lineEdit_notif);


        verticalLayout_3->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_5->addWidget(label_7);

        lineEdit_val_occup = new QLineEdit(layoutWidget);
        lineEdit_val_occup->setObjectName(QStringLiteral("lineEdit_val_occup"));

        horizontalLayout_5->addWidget(lineEdit_val_occup);


        verticalLayout_3->addLayout(horizontalLayout_5);

        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(310, 20, 256, 311));
        pushButton_load = new QPushButton(tab_4);
        pushButton_load->setObjectName(QStringLiteral("pushButton_load"));
        pushButton_load->setGeometry(QRect(60, 330, 93, 28));
        layoutWidget1 = new QWidget(tab_4);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 260, 295, 30));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_save = new QPushButton(layoutWidget1);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));

        horizontalLayout_6->addWidget(pushButton_save);

        pushButton_update = new QPushButton(layoutWidget1);
        pushButton_update->setObjectName(QStringLiteral("pushButton_update"));

        horizontalLayout_6->addWidget(pushButton_update);

        pushButton_delete = new QPushButton(layoutWidget1);
        pushButton_delete->setObjectName(QStringLiteral("pushButton_delete"));

        horizontalLayout_6->addWidget(pushButton_delete);

        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        tabWidget->addTab(tab_3, QString());

        retranslateUi(AdminDialog);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(AdminDialog);
    } // setupUi

    void retranslateUi(QDialog *AdminDialog)
    {
        AdminDialog->setWindowTitle(QApplication::translate("AdminDialog", "Dialog", 0));
        label->setText(QApplication::translate("AdminDialog", "Bienvenue", 0));
        label_2->setText(QApplication::translate("AdminDialog", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("AdminDialog", "Bienvenue", 0));
        pushButton->setText(QApplication::translate("AdminDialog", "Write", 0));
        pushButton_2->setText(QApplication::translate("AdminDialog", "Read", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("AdminDialog", "Admin", 0));
        label_6->setText(QApplication::translate("AdminDialog", "TextLabel", 0));
        label_3->setText(QApplication::translate("AdminDialog", "Id conteneur", 0));
        label_4->setText(QApplication::translate("AdminDialog", "Occupation maximale", 0));
        label_5->setText(QApplication::translate("AdminDialog", "Seuil de notification", 0));
        label_7->setText(QApplication::translate("AdminDialog", "Valeur d\342\200\231occupation", 0));
        pushButton_load->setText(QApplication::translate("AdminDialog", "Load", 0));
        pushButton_save->setText(QApplication::translate("AdminDialog", "Save", 0));
        pushButton_update->setText(QApplication::translate("AdminDialog", "Update", 0));
        pushButton_delete->setText(QApplication::translate("AdminDialog", "Delete", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("AdminDialog", "Dechets", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("AdminDialog", "A propos ", 0));
    } // retranslateUi

};

namespace Ui {
    class AdminDialog: public Ui_AdminDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINDIALOG2_H
