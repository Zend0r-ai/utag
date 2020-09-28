#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string>
#include <QDir>
#include <QList>
#include <QLabel>
#include <QLineEdit>

struct FileTags{
       QString title;
       QString artist;
       QString album;
       QString genre;
   };

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

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
    void ListSorting(SortingArg file_tags, SortingArg sorting_filter);
    ~MainWindow();

private slots:
    void on_editButton_pressed();
    void on_saveButton_pressed();
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
};
#endif // MAINWINDOW_H
