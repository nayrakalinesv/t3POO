#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Aluno.h"
#include "info_aluno.h"
#include "info_materia.h"
#include "creditos.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>

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


void MainWindow::on_btn_Info_aluno_clicked()
{
    Info_aluno janela_aluno;
    janela_aluno.exec();
}



void MainWindow::on_btn_Materias_clicked()
{
    info_materia janela_materias;
    janela_materias.exec();
}



void MainWindow::on_btn_Info_aluno_2_clicked()
{
    Creditos janela_creditos;
    janela_creditos.exec();
}
