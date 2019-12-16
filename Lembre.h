#ifndef LEMBRE_H
#define LEMBRE_H
#include<string>
#include<QString>

using namespace std;

class Lembre{
public:
    Lembre(){

    }

    ~Lembre(){}

    void setInfo(QString n_info){
        strcpy(this->info, n_info.toStdString().c_str());
    }

    QString getInfo(){
        string s(info);
        QString x = QString::fromStdString(s);
        return x;
    }

private:
    char info[500];
};
#endif // LEMBRE_H
