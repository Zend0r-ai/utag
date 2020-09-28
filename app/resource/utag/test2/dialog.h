#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mainwindow.h"
namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(FileTags cur_data , QWidget *parent = nullptr);
    FileTags get_res();
    ~Dialog();


private slots:
    void on_save_button_pressed();

private:
    Ui::Dialog *ui;
};

#endif // DIALOG_H
