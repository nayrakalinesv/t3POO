#include "tela_atividade.h"
#include "ui_tela_atividade.h"

tela_atividade::tela_atividade(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tela_atividade)
{
    ui->setupUi(this);
}

tela_atividade::~tela_atividade()
{
    delete ui;
}
