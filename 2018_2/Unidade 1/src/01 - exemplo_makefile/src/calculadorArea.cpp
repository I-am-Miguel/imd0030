#include "calculadorArea.h"

CalculadorArea::CalculadorArea(){}
CalculadorArea::~CalculadorArea(){}

float 
CalculadorArea::calculaAreaTriangulo(Triangulo& triangulo){
    return (triangulo.getBase() * triangulo.getAltura())/2;
}
        
float 
CalculadorArea::calculaAreaRetangulo(Retangulo& retangulo){
    return retangulo.getBase() * retangulo.getAltura();
}
        
float 
CalculadorArea::calculaAreaCirculo(Circulo& circulo){
    return pow(circulo.getRaio(),2) * M_PI;
}