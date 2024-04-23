#include "Circulo.h"

Circulo::Circulo(void){
    Circulo::radio = 0;
}
Circulo::Circulo(double radio){
    Circulo::radio = radio;
    Circulo::verificaTuEstado();
}
Circulo::~Circulo(void){
}
void Circulo::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi radio ";
    cin >> this->radio;
    this->verificaTuEstado();
}
void Circulo::muestraTuEstado(void){
    cout<<"Radio: "<<this->radio<<endl
        <<"Diametro: "
        <<this->dameTuAtributoDiametro()<<endl
        <<"Area: "
        <<this->dameTuAtributoArea()<<endl
        <<"Perimetro: "
        <<this->dameTuAtributoPerimetro()<<endl;
}
double Circulo::dameTuAtributoRadio(void){
    return this->radio;
}
void Circulo::modificaTuAtributoRadio(double radio){
    this->radio = radio;
    this->verificaTuEstado();
}
double Circulo::dameTuAtributoDiametro(void){
    return this->radio * 2;
}
double Circulo::dameTuAtributoArea(void){
    return M_PI * pow(this->radio, 2);
}
double Circulo::dameTuAtributoPerimetro(void){
    return 2 * M_PI * this->radio;
}
void Circulo::verificaTuEstado(void){
    if(this->radio < 0)
        this->radio = 0;
}
