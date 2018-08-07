#include <iostream>
#include "calculadorArea.h"

using namespace std;

int main (void){
    Triangulo triangulo(2,3);
    Retangulo retangulo(4,4);
    Circulo   circulo(4);

    CalculadorArea calculadorArea;

    cout << "CALCULANDO ÁREA DE FORMAS GEOMÉTRICAS" << endl;
    cout << "Triangulo: \t"<< calculadorArea.calculaAreaTriangulo(triangulo) << endl;
    cout << "Retangulo: \t"<< calculadorArea.calculaAreaRetangulo(retangulo) << endl;
    cout << "Circulo:   \t"<< calculadorArea.calculaAreaCirculo(circulo)<< endl;

    return EXIT_SUCCESS;
}