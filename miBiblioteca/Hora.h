#ifndef HORA_H
#define HORA_H


#include <iostream>
#include <stdlib.h>
using namespace std;

class Hora{
private:
    int hora;
    int minuto;
    int segundo;
    void verificaTuEstado(void);
public:
    Hora(void);
    Hora(int hora, int minuto, int segundo);
    ~Hora(void);
    void pideleAlUsuarioTuEstado(void);
    void muestraTuEstado(void);
    int dameTuAtributoHora(void);
    void modificaTuAtributoHora(int hora);
    int dameTuAtributoMinuto(void);
    void modificaTuAtributoMinuto(int minuto);
    int dameTuAtributoSegundo(void);
    void modificaTuAtributoSegundo(int hora);
};

#endif // HORA_H
