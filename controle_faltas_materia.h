#ifndef CONTROLE_FALTAS_MATERIA_H
#define CONTROLE_FALTAS_MATERIA_H

#include <QDialog>

namespace Ui {
class controle_faltas_materia;
}

class controle_faltas_materia : public QDialog
{
    Q_OBJECT

public:
    explicit controle_faltas_materia(int tipo_materia, QWidget *parent = nullptr);
    ~controle_faltas_materia();

    int getTipo_materia(){
        return tipo_materia;
    }

private slots:

    void on_btn_add_falta_clicked();

    void on_btn_removerFalta_clicked();

private:
    Ui::controle_faltas_materia *ui;
    int tipo_materia;
};

#endif // CONTROLE_FALTAS_MATERIA_H
