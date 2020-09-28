#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <QDir>
#include <QList>
#include <QLabel>
#include <QLineEdit>
#include <QWidget>
#include <QListWidgetItem>
#include <tbytevector.h>
#include <iostream>
#include <mpegfile.h>
#include <QDialog>
#include <QMessageBox>

#include <algorithm>
#include <id3v2tag.h>
#include <tag.h>

#include "dialog.h"
#include <fileref.h>
using namespace std;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

struct FileTagsMain{
    QString title;
    QString artist;
    QString album;
    QString genre;
    QString file_path;
    bool editable = true;

};

class MainWindow : public QMainWindow
{
 Q_OBJECT

 public:
    enum class SortingArg{
        ALBUM,
        TITLE,
        ARTIST,
        GENRE,
        ASC,
        DECS
    };
    MainWindow(QWidget *parent = nullptr);
    MainWindow(const QString& directory_path, QWidget *parent = nullptr);
    void ListSorting();
    void ListFilling();
    ~MainWindow();

private slots:
    void on_editButton_pressed();
    void on_actionExit_triggered();
    void on_actionDark_Theme_triggered();
    void on_actionArtist_triggered();
    void on_actionTitle_triggered();
    void on_actionAlbum_triggered();
    void on_actionGenre_triggered();
    void on_actionSort_ascending_triggered();
    void on_actionSort_descending_triggered();

private:
    Ui::MainWindow *ui;
    QString dir_path;
    QStringList images;
    QList<FileTagsMain> file_list;
    map<QString, FileTagsMain> map_file;
    QString basic_sheet;
    QPalette basic_palette;
//    TagLib::FileRef edit_file_tags;
};
#endif // MAINWINDOW_H
