#include "Fecha.h"


//Metodos de la clase

Fecha::Fecha(void){
    Fecha::dia = 1;
    Fecha::mes = 1;
    Fecha::anio = 2024;
    //cout<<"Objeto construido por Fecha(void)"<<endl;
}
Fecha::Fecha(int dia, int mes, int anio){
    Fecha::dia = dia;
    Fecha::mes = mes;
    Fecha::anio = anio;
    Fecha::verificaTuEstado();
    //cout<<"Objeto construido por Fecha(int dia, int mes)"<<endl;
}
Fecha::~Fecha(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Fecha::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi dia ";
    cin >> this->dia;
    cout << "Dame mi mes ";
    cin >> this->mes;
    cout << "Dame mi anio ";
    cin >> this->anio;
    this->verificaTuEstado();
}
void Fecha::muestraTuEstado(void){
    cout<<this->dia<<"/"<<this->mes<<"/"<<this->anio<<endl;
}
int Fecha::dameTuAtributoDia(void){
    return this->dia;
}
void Fecha::modificaTuAtributoDia(int dia){
    this->dia = dia;
    this->verificaTuEstado();
}
int Fecha::dameTuAtributoMes(void){
    return this->mes;
}
void Fecha::modificaTuAtributoMes(int mes){
    this->mes = mes;
    this->verificaTuEstado();
}
int Fecha::dameTuAtributoAnio(void){
    return this->anio;
}
void Fecha::modificaTuAtributoAnio(int anio){
    this->anio = anio;
    this->verificaTuEstado();
}
void Fecha::verificaTuEstado(void){
    if(this->anio <= 0)
        this->anio = 2024;

    if(this->mes <= 0 || this->dia > 12)
        this->mes = 1;

    if(this->dia <= 0 || this->dia > 31)
        this->dia = 1;
}
