#ifndef CREDITOS_H
#define CREDITOS_H

#include <QDialog>

namespace Ui {
class Creditos;
}

class Creditos : public QDialog
{
    Q_OBJECT

public:
    explicit Creditos(QWidget *parent = nullptr);
    ~Creditos();

private:
    Ui::Creditos *ui;
};

#endif // CREDITOS_H
