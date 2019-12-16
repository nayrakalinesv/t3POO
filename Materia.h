#ifndef MATERIA_H
#define MATERIA_H
#include <QString>
#include <string>

using namespace std;

class Materia{
public:
    Materia(){
     }
    ~Materia(){}

    void setDescrcao(QString n_descricao){
        strcpy(this->descricao, n_descricao.toStdString().c_str());
    }
    QString getDescricao(){
        string s(descricao);
        QString x = QString::fromStdString(s);
        return x;
    }

    void setFaltas(int novo_faltas){
        this->numero_faltas = novo_faltas;
    }
    QString getFaltas(){
        QString x = QString::fromStdString(std::to_string(numero_faltas));
        return x;
    }

    void setMaxFaltas(int n_max_faltas){
        this->max_faltas = n_max_faltas;
    }

    bool estourou_faltas(){
        if(numero_faltas ==  max_faltas){
            return true;
        }
        return false;
    }

    bool perdeu_a_materia(){
        if(numero_faltas > max_faltas)
            return true;
        return false;
    }

    int adiciona_falta(){
        this->numero_faltas = numero_faltas + 1;
        return numero_faltas;
    }
    int remove_falta(){
        if(numero_faltas != 0)
            this->numero_faltas = numero_faltas - 1;

        return numero_faltas;
    }

    QString objeto_salvo(){
        string s(existe);
        QString x = QString::fromStdString(s);
        return x;
    }


private:

    int numero_faltas, max_faltas;
    char descricao[200];
    char existe[6] = {'e', 'x', 'i', 's', 't', 'e'};

};



#endif // MATERIA_H
