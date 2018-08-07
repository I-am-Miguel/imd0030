#include "retangulo.h"

Retangulo::Retangulo(){
    base = 0.0;
    altura = 0.0;
}

Retangulo::Retangulo(float base, float altura):base(base),altura(altura){}
Retangulo::~Retangulo(){}

float
Retangulo::getBase(){
    return base;
}

float 
Retangulo::getAltura(){
    return altura;
}