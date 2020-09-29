/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionDark_theme;
    QAction *actionExit;
    QAction *actionArtist;
    QAction *actionTitle;
    QAction *actionAlbum;
    QAction *actionGenre;
    QAction *actionSort_ascending;
    QAction *actionSort_descending;
    QAction *actionDark_Theme;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QListWidget *listWidget;
    QPushButton *editButton;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QMenu *menuSorting;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(409, 473);
        actionDark_theme = new QAction(MainWindow);
        actionDark_theme->setObjectName(QString::fromUtf8("actionDark_theme"));
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExit->setCheckable(false);
        actionArtist = new QAction(MainWindow);
        actionArtist->setObjectName(QString::fromUtf8("actionArtist"));
        actionArtist->setCheckable(true);
        actionTitle = new QAction(MainWindow);
        actionTitle->setObjectName(QString::fromUtf8("actionTitle"));
        actionTitle->setCheckable(true);
        actionTitle->setChecked(true);
        actionAlbum = new QAction(MainWindow);
        actionAlbum->setObjectName(QString::fromUtf8("actionAlbum"));
        actionAlbum->setCheckable(true);
        actionGenre = new QAction(MainWindow);
        actionGenre->setObjectName(QString::fromUtf8("actionGenre"));
        actionGenre->setCheckable(true);
        actionSort_ascending = new QAction(MainWindow);
        actionSort_ascending->setObjectName(QString::fromUtf8("actionSort_ascending"));
        actionSort_ascending->setCheckable(true);
        actionSort_ascending->setChecked(true);
        actionSort_descending = new QAction(MainWindow);
        actionSort_descending->setObjectName(QString::fromUtf8("actionSort_descending"));
        actionSort_descending->setCheckable(true);
        actionDark_Theme = new QAction(MainWindow);
        actionDark_Theme->setObjectName(QString::fromUtf8("actionDark_Theme"));
        actionDark_Theme->setCheckable(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setAutoFillBackground(true);
        horizontalLayout_2 = new QHBoxLayout(centralwidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout_2->addWidget(listWidget);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        verticalLayout_2->addWidget(editButton);


        horizontalLayout->addLayout(verticalLayout_2);


        horizontalLayout_2->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 409, 21));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        menuSorting = new QMenu(menu_2);
        menuSorting->setObjectName(QString::fromUtf8("menuSorting"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actionExit);
        menu_2->addAction(menuSorting->menuAction());
        menu_2->addAction(actionDark_Theme);
        menuSorting->addAction(actionArtist);
        menuSorting->addAction(actionTitle);
        menuSorting->addAction(actionAlbum);
        menuSorting->addAction(actionGenre);
        menuSorting->addSeparator();
        menuSorting->addAction(actionSort_ascending);
        menuSorting->addAction(actionSort_descending);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionDark_theme->setText(QCoreApplication::translate("MainWindow", "Dark theme", nullptr));
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionArtist->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        actionTitle->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        actionAlbum->setText(QCoreApplication::translate("MainWindow", "Album", nullptr));
        actionGenre->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        actionSort_ascending->setText(QCoreApplication::translate("MainWindow", "Sort ascending", nullptr));
        actionSort_descending->setText(QCoreApplication::translate("MainWindow", "Sort descending", nullptr));
        actionDark_Theme->setText(QCoreApplication::translate("MainWindow", "Dark Theme", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\320\222\320\270\320\264", nullptr));
        menuSorting->setTitle(QCoreApplication::translate("MainWindow", "Sorting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
