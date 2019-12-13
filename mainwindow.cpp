#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Aluno.h"
#include "info_aluno.h"
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
