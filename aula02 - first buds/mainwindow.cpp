#include "mainwindow.h"
#include "./ui_mainwindow.h"

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

void MainWindow::on_pushButton_4_clicked()
{
    ui->label->setText("Melhorar");
}


void MainWindow::on_pushButton_clicked()
{
    ui->label_3->setText("Desafio");
}


void MainWindow::on_pushButton_2_clicked()
{
    ui->label_2->setText("Descobrir");
}


void MainWindow::on_pushButton_3_clicked()
{
    ui->label_4->setText("Incluir");
}


void MainWindow::on_pushButton_5_clicked()
{
    ui->label_5->setText("Concelho");
}


void MainWindow::on_pushButton_6_clicked()
{
    ui->label_6->setText("Confortável");
}


void MainWindow::on_pushButton_7_clicked()
{
    ui->label_7->setText("Acreditar");
}


void MainWindow::on_pushButton_8_clicked()
{
    ui->label_8->setText("Preparar");
}

