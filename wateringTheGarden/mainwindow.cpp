#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "garden.h"
#include "QDebug"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    this->garden = Garden();
    qDebug() << garden.getBudget();
}
