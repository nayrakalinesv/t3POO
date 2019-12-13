#ifndef INFO_ALUNO_H
#define INFO_ALUNO_H

#include <QDialog>

namespace Ui {
class Info_aluno;
}

class Info_aluno : public QDialog
{
    Q_OBJECT

public:
    explicit Info_aluno(QWidget *parent = nullptr);
    ~Info_aluno();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Info_aluno *ui;
};

#endif // INFO_ALUNO_H
