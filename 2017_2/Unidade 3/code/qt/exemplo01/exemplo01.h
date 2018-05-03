#ifndef EXEMPLO01_H
#define EXEMPLO01_H

#include <QMainWindow>

namespace Ui {
class Exemplo01;
}

class Exemplo01 : public QMainWindow
{
    Q_OBJECT

public:
    explicit Exemplo01(QWidget *parent = 0);
    ~Exemplo01();

private:
    Ui::Exemplo01 *ui;
};

#endif // EXEMPLO01_H
