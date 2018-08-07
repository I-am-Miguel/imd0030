#include "triangulo.h"

Triangulo::Triangulo(){
    base = 0.0;
    altura = 0.0;
}

Triangulo::Triangulo(float base, float altura):base(base),altura(altura){}
Triangulo::~Triangulo(){}

float
Triangulo::getBase(){
    return base;
}

float 
Triangulo::getAltura(){
    return altura;
}