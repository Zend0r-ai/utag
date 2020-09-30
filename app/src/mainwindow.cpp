#include <QtWidgets/QDialog>
#include <QtWidgets/QStyleFactory>
#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialog.h"
#include <QtCore/QFileInfo>
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::MainWindow(const QString& directory_path, QWidget *parent) : QMainWindow(parent)
  , ui(new Ui::MainWindow)
{
    basic_palette = qApp->palette();
    basic_sheet = qApp->styleSheet();
    ui->setupUi(this);
    QDir directory(directory_path);
    dir_path = directory.path();
    images = directory.entryList(QStringList() << "*.mp3" << "*.mp3" << "*.ogg" << "*.OGG" << "*.wav" << "*.WAV" << "*.flac" << "*.FLAC",QDir::Files);

    QList<FileTagsMain> file_list;
    foreach(QString filename, images) {
        QString file_path_Q = this->dir_path + "/" + filename;
        QFileInfo info(file_path_Q);
        TagLib::FileRef edit_file_tags(file_path_Q.toLocal8Bit().constData());
        if(info.exists() && info.isReadable() && !edit_file_tags.isNull()) {
            map_file[file_path_Q] = {edit_file_tags.tag()->title().toCString(true),
                                     edit_file_tags.tag()->artist().toCString(true),
                                     edit_file_tags.tag()->album().toCString(true),
                                     edit_file_tags.tag()->genre().toCString(true),
                                     file_path_Q
                                     };
            if(!info.isWritable())
                map_file[file_path_Q].editable = false;
        }
        else {
            map_file[file_path_Q] = {"-",
                                     "-",
                                     "-",
                                     "-",
                                     file_path_Q,
                                     false
            };
        }
    }
    ListSorting();
    if(ui->listWidget->count() != 0){
        ui->listWidget->setCurrentRow(0);
    }
    else {
        auto mess_box = new QMessageBox(this);
        mess_box->setText("Error path or directory is empty");
        auto button = new QPushButton("OK");
        mess_box->setDefaultButton(button);
        mess_box->exec();
        exit(1);
    }
}

void MainWindow::ListSorting() {
    QList<FileTagsMain> file_l;
    for(const auto& it : map_file){
        file_l.push_back({it.second.title, it.second.artist, it.second.album, it.second.genre, it.first});
    }
    ui->listWidget->clear();
    if(ui->actionTitle->isChecked())
        std::sort(file_l.begin(), file_l.end(), [](const auto& lhs, const auto& rhs) {
            return lhs.title < rhs.title;
        });
    else if(ui->actionArtist->isChecked())
        std::sort(file_l.begin(), file_l.end(), [](const auto& lhs, const auto& rhs){
            return lhs.artist < rhs.artist;
        });
    else if(ui->actionAlbum->isChecked())
        std::sort(file_l.begin(), file_l.end(), [](const auto& lhs, const auto& rhs){
            return lhs.album < rhs.album;
        });
    else if(ui->actionGenre->isChecked())
        std::sort(file_l.begin(), file_l.end(), [](const auto& lhs, const auto& rhs){
            return lhs.genre < rhs.genre;
        });
    if(ui->actionSort_descending->isChecked())
        std::reverse(file_l.begin(), file_l.end());
    ui->listWidget->clear();

    for(const auto& it : file_l){
        auto new_item = new QListWidgetItem();
        new_item->setText(it.title + "\n" + it.artist + "\n" + it.album + "\n" + it.genre + "\n" + it.file_path);
        new_item->setStatusTip(it.file_path);
        ui->listWidget->addItem(new_item);
    }
}

void MainWindow::ListFilling() {

}

MainWindow::~MainWindow()
{
    delete ui;
}

void edit_tags(const FileTagsDialog& new_tags, const QString& key){
    TagLib::FileRef edit_file_tags(key.toLocal8Bit().constData());
    edit_file_tags.tag()->setTitle(new_tags.title.toLocal8Bit().constData());
    edit_file_tags.tag()->setArtist(new_tags.artist.toLocal8Bit().constData());
    edit_file_tags.tag()->setAlbum(new_tags.album.toLocal8Bit().constData());
    edit_file_tags.tag()->setGenre(new_tags.genre.toLocal8Bit().constData());
    edit_file_tags.save();
}


void MainWindow::on_editButton_pressed()
{
    QListWidgetItem* buf = ui->listWidget->currentItem();
    if(ui->listWidget->count() != 0 && map_file[buf->statusTip()].editable == true){
        auto buffer = map_file[buf->statusTip()];
        Dialog* new_elem = new Dialog({buffer.title, buffer.artist, buffer.album, buffer.genre});
        new_elem->setModal(true);
        new_elem->exec();
        FileTagsDialog new_buf = new_elem->get_res();
        buf->setText(new_buf.title + "\n" + new_buf.artist + "\n" + new_buf.album + "\n" + new_buf.genre + "\n" + buf->statusTip());
        map_file[buf->statusTip()] = {new_buf.title, new_buf.artist, new_buf.album, new_buf.genre};
        edit_tags(new_buf, buf->statusTip());
        ListSorting();
    }
    else {
        auto mess_box = new QMessageBox(this);
        mess_box->setText("The file is not editable");
        auto button = new QPushButton("OK");
        mess_box->setDefaultButton(button);
        mess_box->exec();
    }
}



void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionDark_Theme_triggered()
{
    qApp->setStyle(QStyleFactory::create("Fusion"));
    if(ui->actionDark_Theme->isChecked()){
        QPalette dark_theme;
        dark_theme.setColor(QPalette::Window, QColor(38, 38, 38));
        dark_theme.setColor(QPalette::Window, QColor(53,53,53));
        dark_theme.setColor(QPalette::WindowText, Qt::gray);
        dark_theme.setColor(QPalette::Base, QColor(25,25,25));
        dark_theme.setColor(QPalette::AlternateBase, QColor(53,53,53));
        dark_theme.setColor(QPalette::ToolTipBase, Qt::white);
        dark_theme.setColor(QPalette::ToolTipText, QColor(0, 255, 85, 0.4));
        dark_theme.setColor(QPalette::Text, Qt::white);
        dark_theme.setColor(QPalette::Button, QColor(64, 64, 64));
        dark_theme.setColor(QPalette::ButtonText, QColor(0, 204, 0));
        dark_theme.setColor(QPalette::BrightText, Qt::red);
        dark_theme.setColor(QPalette::Link, QColor(42, 130, 218));
        dark_theme.setColor(QPalette::Highlight, QColor(0, 255, 85, 0.4));
        dark_theme.setColor(QPalette::HighlightedText, QColor(0, 204, 0));
        qApp->setPalette(dark_theme);
        qApp->setStyleSheet("QToolTip { color: #ffffff; background-color: #2a82da; border: 1px solid white; }");
        return;
    }
    qApp->setPalette(basic_palette);
    qApp->setStyleSheet(basic_sheet);
}

void MainWindow::on_actionArtist_triggered()
{
    ui->actionTitle->setChecked(false);
    ui->actionGenre->setChecked(false);
    ui->actionAlbum->setChecked(false);
    ui->actionArtist->setChecked(true);
    ListSorting();
}

void MainWindow::on_actionTitle_triggered()
{
    ui->actionArtist->setChecked(false);
    ui->actionGenre->setChecked(false);
    ui->actionAlbum->setChecked(false);
    ui->actionTitle->setChecked(true);
    ListSorting();
}

void MainWindow::on_actionAlbum_triggered()
{
    ui->actionTitle->setChecked(false);
    ui->actionGenre->setChecked(false);
    ui->actionArtist->setChecked(false);
    ui->actionAlbum->setChecked(true);
    ListSorting();
}

void MainWindow::on_actionGenre_triggered()
{
    ui->actionTitle->setChecked(false);
    ui->actionArtist->setChecked(false);
    ui->actionAlbum->setChecked(false);
    ui->actionGenre->setChecked(true);
    ListSorting();
}

void MainWindow::on_actionSort_ascending_triggered()
{
    ui->actionSort_descending->setChecked(false);
    ui->actionSort_ascending->setChecked(true);
    ListSorting();
}

void MainWindow::on_actionSort_descending_triggered()
{
    ui->actionSort_ascending->setChecked(false);
    ui->actionSort_descending->setChecked(true);
    ListSorting();
}
