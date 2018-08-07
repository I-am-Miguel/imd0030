#ifndef TRIANGULO_H
#define TRIANGULO_H

class Triangulo{
    private:
        float base;
        float altura;

    public:
        Triangulo();
        Triangulo(float base, float altura);
        ~Triangulo();

        float getBase();
        float getAltura();
};
#endif