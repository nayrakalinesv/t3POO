#include "info_materia.h"
#include "ui_info_materia.h"
#include "ui_controle_faltas_materia.h"
#include "controle_faltas_materia.h"

info_materia::info_materia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::info_materia)
{
    ui->setupUi(this);
}

info_materia::~info_materia()
{
    delete ui;
}



void info_materia::on_btn_calculo_clicked()
{
    controle_faltas_materia janela_controle(1);
    janela_controle.exec();
}

void info_materia::on_btn_logica_clicked()
{
    controle_faltas_materia janela_controle(2);
    janela_controle.exec();
}

void info_materia::on_btn_ipa_clicked()
{
    controle_faltas_materia janela_controle(3);
    janela_controle.exec();
}

void info_materia::on_btn_CAP_clicked()
{
    controle_faltas_materia janela_controle(4);
    janela_controle.exec();
}
