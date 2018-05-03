#include "exemplo01.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Exemplo01 w;
    w.show();

    return a.exec();
}
