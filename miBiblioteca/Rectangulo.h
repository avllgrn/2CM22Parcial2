#ifndef RECTANGULO_H
#define RECTANGULO_H


#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Rectangulo{
private:
    double base;
    double altura;
    void verificaTuEstado(void);
public:
    Rectangulo(void);
    Rectangulo(double base, double altura);
    ~Rectangulo(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoBase(void);
    void modificaTuAtributoBase(double base);
    double dameTuAtributoAltura(void);
    void modificaTuAtributoAltura(double altura);
    void modificaTuEstado(double base, double altura);
    double dameTuAtributoArea(void);
    double dameTuAtributoPerimetro(void);
};

#endif // RECTANGULO_H
