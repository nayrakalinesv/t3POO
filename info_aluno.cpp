#include "info_aluno.h"
#include "ui_info_aluno.h"
#include "Aluno.h"
#include <QMessageBox>

Info_aluno::Info_aluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info_aluno)
{
    ui->setupUi(this);

}

Info_aluno::~Info_aluno()
{
    delete ui;
}

void Info_aluno::on_pushButton_clicked()
{
    QString nome = ui->cx_Edit_Nome->text();
    QString RA = ui->cxc_Edit_RA->text();
    QMessageBox::information(this, "Dados alterados com sucesso!", "Nome: "+nome+"\nRA: "+RA);
    ui->lbl_Nome->setText(nome);
    ui->lbl_RA->setText(RA);

         //salvar em um arquivo binário os dados

}
