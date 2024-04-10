#ifndef PUNTO2D_H
#define PUNTO2D_H


#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

class Punto2D{
private:
    double x;
    double y;
public:
    Punto2D(void);
    Punto2D(double x, double y);
    ~Punto2D(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoX(void);
    void modificaTuAtributoX(double x);
    double dameTuAtributoY(void);
    void modificaTuAtributoY(double y);
};

Punto2D suma(Punto2D A, Punto2D B);
Punto2D resta(Punto2D A, Punto2D B);
double distanciaEntre(Punto2D A, Punto2D B);
double pendienteDados(Punto2D A, Punto2D B);

#endif // PUNTO2D_H
