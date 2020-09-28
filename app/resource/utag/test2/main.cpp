#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w("C:/Users/Vled/Desktop/utag");
//    MainWindow w("C:/Users/Vled/Desktop");
//    MainWindow w(argv[1]);
    w.show();
    return a.exec();
}
