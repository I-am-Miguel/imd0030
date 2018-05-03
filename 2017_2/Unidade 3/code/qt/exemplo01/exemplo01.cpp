#include "exemplo01.h"
#include "ui_exemplo01.h"

Exemplo01::Exemplo01(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Exemplo01)
{
    ui->setupUi(this);
}

Exemplo01::~Exemplo01()
{
    delete ui;
}
