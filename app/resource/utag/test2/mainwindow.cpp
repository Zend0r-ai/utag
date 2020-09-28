#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(const QString& directory_path, QWidget *parent) : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{

    ui->setupUi(this);QDir directory(directory_path);
    dir_path = directory.path();
    images = directory.entryList(QStringList() << "*.mp3" << "*.mp3",QDir::Files);

//    ui->tableWidget->setRowCount(5);
//    ui->tableWidget->setColumnCount(5);
//    QStringList HeaderLabel;
//    HeaderLabel << "#" << "Artist" << "Title" << "Album" << "Genre";
//    ui->tableWidget->setHorizontalHeaderLabels(HeaderLabel);
//    ui->tableWidget->verticalHeader()->setVisible(false);

    foreach(QString filename, images) {
        QListWidgetItem* buf = new QListWidgetItem(filename);
        ui->listWidget->addItem(buf);

//        ui->listWidget->addItem(buf);
    }
    if(ui->listWidget->count() != 0){
        ui->listWidget->setCurrentRow(0);
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_editButton_pressed()
{
    FileTags buf;
    buf = {"title" , "artist", "album", "genre"};
    Dialog* new_elem = new Dialog(buf ,this);
    new_elem->setModal(true);
    new_elem->exec();
    if(ui->listWidget->count() != 0){
        QListWidgetItem* buf = ui->listWidget->currentItem();
        FileTags new_buf = new_elem->get_res();
        buf->setText(new_buf.title + new_buf.artist + new_buf.album + new_buf.genre);
//        buf->setText("aaaaaaaaa");
//        new_elem->artist->setText(buf->text() + " artist");
//        new_elem->title->setText(buf->text() + " title");
//        new_elem->album->setText(buf->text() + " album");
//        new_elem->genre->setText(buf->text() + " genre");
//        new_elem->file_path->setText(this->dir_path + "/" + buf->text());
    }
}


void MainWindow::on_saveButton_pressed()
{
//    QApplication::
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionDark_Theme_triggered()
{

}

void MainWindow::on_actionArtist_triggered()
{
    ui->actionTitle->setChecked(false);
    ui->actionGenre->setChecked(false);
    ui->actionAlbum->setChecked(false);
    ui->actionArtist->setChecked(true);

}

void MainWindow::on_actionTitle_triggered()
{
    ui->actionArtist->setChecked(false);
    ui->actionGenre->setChecked(false);
    ui->actionAlbum->setChecked(false);
    ui->actionTitle->setChecked(true);
}

void MainWindow::on_actionAlbum_triggered()
{
    ui->actionTitle->setChecked(false);
    ui->actionGenre->setChecked(false);
    ui->actionArtist->setChecked(false);
    ui->actionAlbum->setChecked(true);
}

void MainWindow::on_actionGenre_triggered()
{
    ui->actionTitle->setChecked(false);
    ui->actionArtist->setChecked(false);
    ui->actionAlbum->setChecked(false);
    ui->actionGenre->setChecked(true);
}

void MainWindow::on_actionSort_ascending_triggered()
{
    ui->actionSort_descending->setChecked(false);
    ui->actionSort_ascending->setChecked(true);
}

void MainWindow::on_actionSort_descending_triggered()
{
    ui->actionSort_ascending->setChecked(false);
    ui->actionSort_descending->setChecked(true);
}
