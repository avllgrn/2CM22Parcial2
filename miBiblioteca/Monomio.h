#ifndef MONOMIO_H
#define MONOMIO_H


#include <iostream>
#include <stdlib.h>
using namespace std;

class Monomio{
private:
    double coeficiente;
    int exponente;
public:
    Monomio(void);
    Monomio(double coeficiente, int exponente);
    ~Monomio(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    double dameTuAtributoCoeficiente(void);
    void modificaTuAtributoCoeficiente(double coeficiente);
    int dameTuAtributoExponente(void);
    void modificaTuAtributoExponente(int exponente);
};


Monomio suma(Monomio A, Monomio B);
Monomio resta(Monomio A, Monomio B);
Monomio multiplica(Monomio A, Monomio B);
Monomio divide(Monomio A, Monomio B);


#endif // MONOMIO_H
