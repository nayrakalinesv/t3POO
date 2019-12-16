#ifndef LEMBRETE_H
#define LEMBRETE_H

#include <QDialog>

namespace Ui {
class Lembrete;
}

class Lembrete : public QDialog
{
    Q_OBJECT

public:
    explicit Lembrete(QWidget *parent = nullptr);
    ~Lembrete();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Lembrete *ui;
};

#endif // LEMBRETE_H
