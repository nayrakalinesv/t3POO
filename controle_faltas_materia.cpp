#include "controle_faltas_materia.h"
#include "ui_controle_faltas_materia.h"
#include "Materia.h"
#include <fstream>

controle_faltas_materia::controle_faltas_materia(int tipo_materia, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controle_faltas_materia)
{
    ui->setupUi(this);

    this->tipo_materia = tipo_materia;
    Materia* pont_materia = new Materia;

    //1=calculo, 2=LD, 3=IPA, 4=CAP
    //pont_materia->setDescrcao("1. NÚMEROS REAIS E FUNÇÕES DE UMA VARIÁVEL REAL.2. LIMITES E CONTINUIDADE.3. CÁLCULO DIFERENCIAL E APLICAÇÕES.4. CÁLCULO INTEGRAL E APLICAÇÕES.");

    if(tipo_materia == 1){
        ui->lbl_materia->setText("CDI - Cálculo Diferencial e Integral I - 6 créditos - DM");
        ifstream ifs;
        ifs.open("calculo.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        ui->plainTextEdit->setPlainText("1. NÚMEROS REAIS E FUNÇÕES DE UMA VARIÁVEL REAL.\n2. LIMITES E CONTINUIDADE.\n3. CÁLCULO DIFERENCIAL E APLICAÇÕES.\n4. CÁLCULO INTEGRAL E APLICAÇÕES.");
        ui->n_max_faltas->setText("11");
        ui->n_faltas->setText(pont_materia->getFaltas());
    }
    if(tipo_materia == 2){
        ui->lbl_materia->setText("LD - Lógica Digital - 4 créditos - DC");
        ifstream ifs;
        ifs.open("LD.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        ui->plainTextEdit->setPlainText("Conceitos fundamentais de eletrônica digital. Representação digital da informação. Álgebra booleana. Tabelas verdade e portas lógicas. Expressões lógicas e formas canônicas. Estratégias de minimização de circuitos. Elementos de memória. Máquinas de estado (Mealy e Moore). Circuitos funcionais típicos (combinacionais e sequenciais).");
        ui->n_max_faltas->setText("11");
        ui->n_faltas->setText(pont_materia->getFaltas());
    }

    if(tipo_materia == 3){
        ui->lbl_materia->setText("IPA - Introdução ao Pensamento Algorítmico - 2 créditos - DC");
        ifstream ifs;
        ifs.open("IPA.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        ui->plainTextEdit->setPlainText("Introdução ao pensamento algorítmico. Análise e especificação de problemas sob o aspecto de pensamento algorítmico. Técnicas de resolução de problemas: abstração, decomposição, reconhecimento de padrões e generalização. Representação e visualização de dados e soluções, com interpretação de resultados. Noções de paralelização. Noções de eficiência de um algoritmo. Introdução em alto nível de algoritmos de diversas áreas de ciência da computação: ordenação, busca, conectividade em grafos, caminhos mínimos, hashing, k-nn, criptografia.");
        ui->n_max_faltas->setText("3");
        ui->n_faltas->setText(pont_materia->getFaltas());
    }
    if(tipo_materia == 4){
        ui->lbl_materia->setText("CAP - Construção de Algoritmos e Programação - 8 créditos – DC");
        ifstream ifs;
        ifs.open("CAP.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        ui->plainTextEdit->setPlainText("Noções gerais da computação: organização de computadores, programas, linguagens e aplicações. Detalhamento de algoritmos estruturados e programação: tipos básicos de dados. Representação e manipulação de dados. Estruturas de controle de fluxo (condicionais e repetições). Modularização (sub-rotinas, passagem de parâmetros e escopo). Documentação. Estruturação básica de dados: variáveis compostas heterogêneas (registros) e homogêneas (vetores e matrizes). Operações em arquivos e sua manipulação. Alocação dinâmica de memória e ponteiros.");
        ui->n_max_faltas->setText("15");
        ui->n_faltas->setText(pont_materia->getFaltas());
    }

}

controle_faltas_materia::~controle_faltas_materia()
{
    delete ui;
}



void controle_faltas_materia::on_btn_add_falta_clicked()
{
    if(tipo_materia == 1){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("calculo.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        pont_materia->adiciona_falta();
        ofstream ofs;
        ofs.open("calculo.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();
        ui->n_faltas->setText(pont_materia->getFaltas());
    }

    if(tipo_materia == 2){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("LD.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        pont_materia->adiciona_falta();
        ofstream ofs;
        ofs.open("LD.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();
        ui->n_faltas->setText(pont_materia->getFaltas());
    }

    if(tipo_materia == 3){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("IPA.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        pont_materia->adiciona_falta();
        ofstream ofs;
        ofs.open("IPA.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();
        ui->n_faltas->setText(pont_materia->getFaltas());
    }
    if(tipo_materia == 4){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("CAP.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();
        pont_materia->adiciona_falta();
        ofstream ofs;
        ofs.open("CAP.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();
        ui->n_faltas->setText(pont_materia->getFaltas());
    }
}

void controle_faltas_materia::on_btn_removerFalta_clicked()
{
    if(tipo_materia == 1){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("calculo.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();

        pont_materia->remove_falta();
        ofstream ofs;
        ofs.open("calculo.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();

        ui->n_faltas->setText(pont_materia->getFaltas());
    }

    if(tipo_materia == 2){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("LD.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();

        pont_materia->remove_falta();
        ofstream ofs;
        ofs.open("LD.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();

        ui->n_faltas->setText(pont_materia->getFaltas());
    }
    if(tipo_materia == 3){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("IPA.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();

        pont_materia->remove_falta();
        ofstream ofs;
        ofs.open("IPA.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();

        ui->n_faltas->setText(pont_materia->getFaltas());
    }
    if(tipo_materia == 4){
        Materia* pont_materia = new Materia;
        ifstream ifs;
        ifs.open("CAP.bin", ios::binary);

        if (ifs.is_open()) {
            ifs.read(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ifs.close();

        pont_materia->remove_falta();
        ofstream ofs;
        ofs.open("CAP.bin", ios::binary);
        if (ofs.is_open()) {
            ofs.write(reinterpret_cast<char*>(pont_materia), sizeof (Materia));
        }
        ofs.close();

        ui->n_faltas->setText(pont_materia->getFaltas());
    }

}
