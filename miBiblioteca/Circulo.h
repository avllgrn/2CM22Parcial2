#ifndef CIRCULO_H
#define CIRCULO_H

#include<iostream>
#include <math.h>
using namespace std;
class Circulo{
private:
    double radio;
    void verificaTuEstado(void);
public:
    Circulo(void);
    Circulo(double r);
    ~Circulo(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoRadio(void);
    void modificaTuAtributoRadio(double radio);
    double dameTuAtributoDiametro(void);
    double dameTuAtributoArea(void);
    double dameTuAtributoPerimetro(void);
};

#endif // CIRCULO_H
