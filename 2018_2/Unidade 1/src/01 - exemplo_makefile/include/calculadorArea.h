#ifndef CALCULADOR_AREA_H
#define CALCULADOR_AREA_H

#include <cmath>

#include "retangulo.h"
#include "triangulo.h"
#include "circulo.h"

class CalculadorArea{

   public:
        CalculadorArea();
        ~CalculadorArea();

        float calculaAreaTriangulo(Triangulo& triangulo);
        float calculaAreaRetangulo(Retangulo& retangulo);
        float calculaAreaCirculo(Circulo& Circulo);
};
#endif