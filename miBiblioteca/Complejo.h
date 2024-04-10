#ifndef COMPLEJO_H
#define COMPLEJO_H


#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Complejo{
private:
    double real;
    double imaginario;
public:
    Complejo(void);
    Complejo(double real, double imaginario);
    ~Complejo(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoReal(void);
    void modificaTuAtributoReal(double real);
    double dameTuAtributoImaginario(void);
    void modificaTuAtributoImaginario(double imaginario);
};


Complejo suma(Complejo A, Complejo B);
Complejo resta(Complejo A, Complejo B);
Complejo multiplica(Complejo A, Complejo B);
Complejo divide(Complejo A, Complejo B);


#endif // COMPLEJO_H
