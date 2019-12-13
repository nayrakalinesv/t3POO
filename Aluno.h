#ifndef ALUNO_H
#define ALUNO_H
#include <QString>

class Aluno{
public:
    Aluno();
    Aluno(QString nome, QString RA):nome(nome), RA(RA){}
    ~Aluno(){}
    void setRA(QString n_RA){
        this->RA = n_RA;
    }
    void setNome(QString novo_nome){
        this->nome = novo_nome;
    }
private:

    QString nome, RA;
    //vector de ponteiros para classe matéria

};


#endif // ALUNO_H
