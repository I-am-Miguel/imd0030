#include "circulo.h"

Circulo::Circulo(){}

Circulo::Circulo(float raio):raio(raio){}

Circulo::~Circulo(){}

float 
Circulo::getRaio(){
    return raio;
}

float
Circulo::getCircunferencia(){
    return 2 * raio;
}