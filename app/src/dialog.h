#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include "mainwindow.h"

struct FileTagsDialog{
    QString title;
    QString artist;
    QString album;
    QString genre;
};

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
 Q_OBJECT

 public:
    explicit Dialog(FileTagsDialog tag, QWidget *parent = nullptr);
    FileTagsDialog get_res();
    ~Dialog();


 private slots:
    void on_save_button_pressed();

 private:

    Ui::Dialog *ui;
};

#endif // DIALOG_H
