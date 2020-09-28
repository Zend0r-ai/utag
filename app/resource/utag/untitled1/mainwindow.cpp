#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    label = new QLabel;
    ui->setupUi(this);
}


void MainWindow::setTextLabel(){
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open Address Book"), "",
            tr("Address Book (*.mp3)"));
    label->setText(fileName);
}
MainWindow::~MainWindow()
{
    delete ui;
}

//    if (fileName.isEmpty())
//            return;
//    else {

//        QFile file(fileName);

//        if (!file.open(QIODevice::ReadOnly)) {
//            QMessageBox::information(this, tr("Unable to open file"),
//                file.errorString());
//            return;
//        }

//        QDataStream in(&file);
//        in.setVersion(QDataStream::Qt_4_5);
//        contacts.clear();   // clear existing contacts
//        in >> contacts; if (contacts.isEmpty()) {
//            QMessageBox::information(this, tr("No contacts in file"),
//                tr("The file you are attempting to open contains no contacts."));
//        } else {
//            QMap<QString, QString>::iterator i = contacts.begin();
//            nameLine->setText(i.key());
//            addressText->setText(i.value());
//        }
//    }
//    updateInterface(NavigationMode);




void MainWindow::on_load_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
            tr("Open Address Book"), "",
            tr("Address Book (*.mp3)"));
//    ui->label->setText(fileName);
    ui->artist->setText("new_artist");
    ui->title->setText("new_title");
    ui->album->setText("new_album");
    ui->genre->setText("new_genre");
    ui->file_path->setText(fileName);
}
