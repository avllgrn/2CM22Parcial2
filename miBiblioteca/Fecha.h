#ifndef FECHA_H
#define FECHA_H


#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha{
private:
    int dia;
    int mes;
    int anio;
    void verificaTuEstado(void);
public:
    Fecha(void);
    Fecha(int dia, int mes, int anio);
    ~Fecha(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    int dameTuAtributoDia(void);
    void modificaTuAtributoDia(int dia);
    int dameTuAtributoMes(void);
    void modificaTuAtributoMes(int mes);
    int dameTuAtributoAnio(void);
    void modificaTuAtributoAnio(int dia);
};

#endif // FECHA_H
