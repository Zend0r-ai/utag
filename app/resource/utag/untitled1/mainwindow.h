#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QDataStream>
#include <QPushButton>
#include <QFileDialog>
#include <QMessageBox>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    QLabel *label;
    QString string;


public slots:
    void setTextLabel();
    void on_load_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

