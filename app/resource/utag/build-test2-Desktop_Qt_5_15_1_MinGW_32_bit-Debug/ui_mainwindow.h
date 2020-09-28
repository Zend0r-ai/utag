/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionExit;
    QAction *actionDark_Theme;
    QAction *actionArtist;
    QAction *actionTitle;
    QAction *actionAlbum;
    QAction *actionGenre;
    QAction *actionSort_ascending;
    QAction *actionSort_descending;
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *editButton;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuView;
    QMenu *menuSorting;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(306, 315);
        actionExit = new QAction(MainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionDark_Theme = new QAction(MainWindow);
        actionDark_Theme->setObjectName(QString::fromUtf8("actionDark_Theme"));
        actionDark_Theme->setCheckable(true);
        actionDark_Theme->setChecked(false);
        actionArtist = new QAction(MainWindow);
        actionArtist->setObjectName(QString::fromUtf8("actionArtist"));
        actionArtist->setCheckable(true);
        actionArtist->setChecked(true);
        actionTitle = new QAction(MainWindow);
        actionTitle->setObjectName(QString::fromUtf8("actionTitle"));
        actionTitle->setCheckable(true);
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
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 261, 191));
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(20, 240, 261, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 306, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuSorting = new QMenu(menuView);
        menuSorting->setObjectName(QString::fromUtf8("menuSorting"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionExit);
        menuView->addAction(menuSorting->menuAction());
        menuView->addAction(actionDark_Theme);
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
        actionExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        actionDark_Theme->setText(QCoreApplication::translate("MainWindow", "Dark Theme", nullptr));
        actionArtist->setText(QCoreApplication::translate("MainWindow", "Artist", nullptr));
        actionTitle->setText(QCoreApplication::translate("MainWindow", "Title", nullptr));
        actionAlbum->setText(QCoreApplication::translate("MainWindow", "Album", nullptr));
        actionGenre->setText(QCoreApplication::translate("MainWindow", "Genre", nullptr));
        actionSort_ascending->setText(QCoreApplication::translate("MainWindow", "Sort ascending", nullptr));
        actionSort_descending->setText(QCoreApplication::translate("MainWindow", "Sort descending", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuView->setTitle(QCoreApplication::translate("MainWindow", "View", nullptr));
        menuSorting->setTitle(QCoreApplication::translate("MainWindow", "Sorting", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
