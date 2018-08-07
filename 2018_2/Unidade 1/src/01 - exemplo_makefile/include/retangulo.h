#ifndef RETANGULO_H
#define RETANGULO_H

class Retangulo{
    private:
        float base;
        float altura;

    public:
        Retangulo();
        Retangulo(float base, float altura);
        ~Retangulo();

        float getBase();
        float getAltura();
};
#endif