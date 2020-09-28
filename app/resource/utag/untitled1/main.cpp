#include "mainwindow.h"

#include <QApplication>


void loadFromFile();
QPushButton *loadButton;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
