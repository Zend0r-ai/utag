#include "dialog.h"
#include "mainwindow.h"
#include "ui_dialog.h"

Dialog::Dialog(FileTagsDialog cur_data, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->title->setText(cur_data.title);
    ui->artist->setText(cur_data.artist);
    ui->album->setText(cur_data.album);
    ui->genre->setText(cur_data.genre);

}

FileTagsDialog Dialog::get_res(){
    return {ui->title->toPlainText(),
            ui->artist->toPlainText(),
            ui->album->toPlainText(),
            ui->genre->toPlainText(),
    };
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_save_button_pressed()
{
    close();
}