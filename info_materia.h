#ifndef INFO_MATERIA_H
#define INFO_MATERIA_H

#include <QDialog>

namespace Ui {
class info_materia;
}

class info_materia : public QDialog
{
    Q_OBJECT

public:
    explicit info_materia(QWidget *parent = nullptr);
    ~info_materia();

private slots:

    void on_btn_calculo_clicked();

    void on_btn_logica_clicked();

    void on_btn_ipa_clicked();

    void on_btn_CAP_clicked();

private:
    Ui::info_materia *ui;
};

#endif // INFO_MATERIA_H
