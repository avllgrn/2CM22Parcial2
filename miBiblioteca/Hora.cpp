#include "Hora.h"

//Metodos de la clase

Hora::Hora(void){
    Hora::hora = 0;
    Hora::minuto = 0;
    Hora::segundo = 0;
    //cout<<"Objeto construido por Hora(void)"<<endl;
}
Hora::Hora(int hora, int minuto, int segundo){
    Hora::hora = hora;
    Hora::minuto = minuto;
    Hora::segundo = segundo;
    Hora::verificaTuEstado();
    //cout<<"Objeto construido por Hora(int hora, int minuto)"<<endl;
}
Hora::~Hora(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Hora::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi hora ";
    cin >> this->hora;
    cout << "Dame mi minuto ";
    cin >> this->minuto;
    cout << "Dame mi segundo ";
    cin >> this->segundo;
    this->verificaTuEstado();
}
void Hora::muestraTuEstado(void){
    cout<<this->hora<<":"<<this->minuto<<":"<<this->segundo<<endl;
}
int Hora::dameTuAtributoHora(void){
    return this->hora;
}
void Hora::modificaTuAtributoHora(int hora){
    this->hora = hora;
    this->verificaTuEstado();
}
int Hora::dameTuAtributoMinuto(void){
    return this->minuto;
}
void Hora::modificaTuAtributoMinuto(int minuto){
    this->minuto = minuto;
    this->verificaTuEstado();
}
int Hora::dameTuAtributoSegundo(void){
    return this->segundo;
}
void Hora::modificaTuAtributoSegundo(int segundo){
    this->segundo = segundo;
    this->verificaTuEstado();
}
void Hora::verificaTuEstado(void){
    if(this->hora < 0 || this->hora > 23)
        this->hora = 0;

    if(this->minuto < 0 || this->minuto > 59)
        this->minuto = 0;

    if(this->segundo < 0 || this->segundo > 59)
        this->segundo = 0;
}
