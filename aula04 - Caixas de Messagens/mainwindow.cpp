#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

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
    QMessageBox::about(this, "CFB Cursos", "Curso de QT Creator");
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::aboutQt(this, "CFB Cursos");
}


void MainWindow::on_pushButton_3_clicked()
{
    QMessageBox::critical(this, "CFB Cursos", "ERRO Desconhecido");
}


void MainWindow::on_pushButton_4_clicked()
{
    QMessageBox::information(this, "CFB Cursos", "Você sabia que os morcegos são cegos?");
}


void MainWindow::on_pushButton_5_clicked()
{
    QMessageBox::question(this, "CFB Cursos", "Ta gostando? Ta gostando?");
}


void MainWindow::on_pushButton_6_clicked()
{
    QMessageBox::warning(this, "CFB Cursos", "Cuidado, Arquivo Desconhecido");
}

