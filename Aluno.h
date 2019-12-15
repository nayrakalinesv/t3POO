#ifndef ALUNO_H
#define ALUNO_H
#include <QString>
#include <cstring>

using namespace std;

class Aluno{
public:
    Aluno(){

    }

    ~Aluno(){}

    void setRA(QString n_RA){
        strcpy(this->RA, n_RA.toStdString().c_str());
    }

    void setNome(QString n_nome){
        strcpy(this->nome, n_nome.toStdString().c_str());
    }

    QString getRA(){
        string s(RA);

        QString x = QString::fromStdString(s);
        return x;
    }
    QString getNome(){
        string s(nome);
        QString x = QString::fromStdString(s);
        return x;
    }
private:
    char nome[50];
    char RA[12];

};

#endif // ALUNO_H
