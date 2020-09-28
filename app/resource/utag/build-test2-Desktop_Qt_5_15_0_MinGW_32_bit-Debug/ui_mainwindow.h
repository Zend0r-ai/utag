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
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QListWidget *listWidget;
    QPushButton *editButton;
    QFrame *line;
    QTextEdit *genre;
    QTextEdit *title;
    QTextEdit *album;
    QTextEdit *artist;
    QTextEdit *file_path;
    QPushButton *saveButton;
    QTableWidget *tableWidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(622, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        listWidget = new QListWidget(centralwidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(20, 30, 261, 191));
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(20, 240, 261, 31));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(290, -10, 20, 281));
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        line->setFont(font);
        line->setLineWidth(2);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        genre = new QTextEdit(centralwidget);
        genre->setObjectName(QString::fromUtf8("genre"));
        genre->setGeometry(QRect(320, 150, 281, 31));
        title = new QTextEdit(centralwidget);
        title->setObjectName(QString::fromUtf8("title"));
        title->setGeometry(QRect(320, 70, 281, 31));
        album = new QTextEdit(centralwidget);
        album->setObjectName(QString::fromUtf8("album"));
        album->setGeometry(QRect(320, 110, 281, 31));
        artist = new QTextEdit(centralwidget);
        artist->setObjectName(QString::fromUtf8("artist"));
        artist->setGeometry(QRect(320, 30, 281, 31));
        file_path = new QTextEdit(centralwidget);
        file_path->setObjectName(QString::fromUtf8("file_path"));
        file_path->setGeometry(QRect(320, 190, 281, 31));
        file_path->setReadOnly(true);
        saveButton = new QPushButton(centralwidget);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));
        saveButton->setGeometry(QRect(320, 240, 281, 31));
        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(20, 290, 581, 231));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 622, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        editButton->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        genre->setPlaceholderText(QCoreApplication::translate("MainWindow", "genre", nullptr));
        title->setPlaceholderText(QCoreApplication::translate("MainWindow", "title", nullptr));
        album->setPlaceholderText(QCoreApplication::translate("MainWindow", "album", nullptr));
        artist->setPlaceholderText(QCoreApplication::translate("MainWindow", "artist", nullptr));
        file_path->setPlaceholderText(QCoreApplication::translate("MainWindow", "file path", nullptr));
        saveButton->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
