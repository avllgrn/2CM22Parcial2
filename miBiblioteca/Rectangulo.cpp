#include "Rectangulo.h"


//Metodos de la clase

Rectangulo::Rectangulo(void){
    Rectangulo::base = 0.0;
    Rectangulo::altura = 0.0;
    //cout<<"Objeto construido por Rectangulo(void)"<<endl;
}
Rectangulo::Rectangulo(double base, double altura){
    Rectangulo::base = base;
    Rectangulo::altura = altura;
    Rectangulo::verificaTuEstado();
    //cout<<"Objeto construido por Rectangulo(double base, double altura)"<<endl;
}
Rectangulo::~Rectangulo(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Rectangulo::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi base ";
    cin >> this->base;
    cout << "Dame mi altura ";
    cin >> this->altura;
    this->verificaTuEstado();
}
void Rectangulo::muestraTuEstado(void){
    cout<< "Base: "<<this->base<<endl
        << "Altura: "<<this->altura<<endl
        << "Area: "<<this->dameTuAtributoArea()<<endl
        << "Perimetro: "<<this->dameTuAtributoPerimetro()<<endl;
}
double Rectangulo::dameTuAtributoBase(void){
    return this->base;
}
void Rectangulo::modificaTuAtributoBase(double base){
    this->base = base;
    this->verificaTuEstado();
}
double Rectangulo::dameTuAtributoAltura(void){
    return this->altura;
}
void Rectangulo::modificaTuAtributoAltura(double altura){
    this->altura = altura;
    this->verificaTuEstado();
}
void Rectangulo::modificaTuEstado(double base, double altura){
    this->base = base;
    this->altura = altura;
    this->verificaTuEstado();
}
double Rectangulo::dameTuAtributoArea(void){
    return this->base * this->altura;
}
double Rectangulo::dameTuAtributoPerimetro(void){
    return 2*this->base + 2*this->altura;
}
void Rectangulo::verificaTuEstado(void){
    if(this->base <= 0 || this->altura <=0){
        this->base = 0.0;
        this->altura = 0.0;
    }
}
