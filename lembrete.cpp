#include "lembrete.h"
#include "ui_lembrete.h"
#include "Lembre.h"
#include <fstream>
using namespace std;

Lembrete::Lembrete(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Lembrete)
{
    ui->setupUi(this);

    Lembre* pont_lembre = new Lembre;
    pont_lembre->setInfo("");
    ifstream ofs;
    ofs.open("lembrete.bin", ios::binary);
    ofs.read(reinterpret_cast<char *> (pont_lembre), sizeof (Lembre));
    ofs.close();

    ui->plainTextEdit->setPlainText(pont_lembre->getInfo());
}

Lembrete::~Lembrete()
{
    delete ui;
}

void Lembrete::on_pushButton_clicked()
{
    Lembre* novo_lembrar = new Lembre;
    novo_lembrar->setInfo(ui->lembret_edit->text());
    ui->plainTextEdit->setPlainText(novo_lembrar->getInfo());

    ofstream ofs;
    ofs.open("lembrete.bin", ios::binary);
    ofs.write(reinterpret_cast<char *> (novo_lembrar), sizeof (Lembre));
    ofs.close();
}
