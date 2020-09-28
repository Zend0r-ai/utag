//#include <tbytevector.h>
//#include <iostream>
//#include <mpegfile.h>
//
//#include <id3v2tag.h>
//#include <tag.h>
//#include <fileref.h>
//
//using namespace TagLib;
//
//int main(){
//    TagLib::FileRef f("C:/Users/Vled/Desktop/utag/test1.mp3");
//    TagLib::String artist = f.tag()->artist();
//    TagLib::String title = f.tag()->title();
//    TagLib::String album = f.tag()->album();
//    TagLib::String genre = f.tag()->genre();
//    TagLib::String comment = f.tag()->comment();
//    std::cout << "artist: " << artist << std::endl;
//    std::cout << "title: " << title << std::endl;
//    std::cout << "album: " << album << std::endl;
//    std::cout << "genre: " << genre << std::endl;
//    std::cout << "comment: " << comment << std::endl;
//    std::cout << "year: " << f.tag()->year() << std::endl;
//    std::cout << "track: " << f.tag()->track() << std::endl;
////    f.tag()->setAlbum("ded");
////    std::cout << "album: " << f.tag()->album() << std::endl;
////    f.save();
//
//    return 0;
//}
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w("C:/Users/Vled/Desktop/utag");

    MainWindow w("C:/Users/Vled/Desktop/utag/dqsd.mp3");
//    MainWindow w("C:/Users/Vled/Desktop");
//    MainWindow w(argv[1]);
    w.show();
    return a.exec();
}
