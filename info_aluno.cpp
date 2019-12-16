#include "info_aluno.h"
#include "ui_info_aluno.h"
#include "Aluno.h"
#include <QMessageBox>
#include <string>
#include <fstream>

using namespace std;

Info_aluno::Info_aluno(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Info_aluno)
{
    Aluno a1;
    string nome_arq = "Aluno.bin";
    ifstream ifs;
    ifs.open(nome_arq.c_str(), ios::binary);

    if (ifs.is_open()) {
        ifs.read(reinterpret_cast<char*>(&a1), sizeof (Aluno));
    }

    ifs.close();

    ui->setupUi(this);
    ui->lbl_Nome->setText(a1.getNome());
    ui->lbl_RA->setText(a1.getRA());

}

Info_aluno::~Info_aluno()
{
    delete ui;
}

void Info_aluno::on_pushButton_clicked()
{
    QString nome = ui->cx_Edit_Nome->text();
    QString RA = ui->cxc_Edit_RA->text();

    QMessageBox::information(this, "Dados alterados com sucesso!", "Nome: "+nome+"\n--------------------------------------------\nRA: "+RA);


   //criando objeto Aluno para ser salvo em um arquivo binário
    Aluno* pont_aluno = new Aluno();
    pont_aluno->setRA(RA);
    pont_aluno->setNome(nome);

    ui->lbl_Nome->setText(pont_aluno->getNome());
    ui->lbl_RA->setText(pont_aluno->getRA());

    //gravando no arquivo binário

    string nome_arq = "Aluno.bin";
    ofstream ofs;
    ofs.open(nome_arq.c_str(), ios::binary);
    ofs.write(reinterpret_cast<char *> (pont_aluno), sizeof (Aluno));
    ofs.close();

    delete pont_aluno;

}
