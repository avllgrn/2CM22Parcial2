#include "Monomio.h"


//Metodos de la clase

Monomio::Monomio(void){
    Monomio::coeficiente = 1;
    Monomio::exponente = 1;
    //cout<<"Objeto construido por Monomio(void)"<<endl;
}
Monomio::Monomio(double coeficiente, int exponente){
    Monomio::coeficiente = coeficiente;
    Monomio::exponente = exponente;
    //cout<<"Objeto construido por Monomio(double coeficiente, int exponente)"<<endl;
};
Monomio::~Monomio(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Monomio::pideleAlUsuarioTuEstado(void){
    cout<<"Dame mi coeficiente ";
    cin>>this->coeficiente;
    cout<<"Dame mi exponente ";
    cin>>this->exponente;
}
void Monomio::muestraTuEstado(void){
    cout<<this->coeficiente;
    cout<<"x^";
    cout<<this->exponente;
}
double Monomio::dameTuAtributoCoeficiente(void){
    return this->coeficiente;
}
void Monomio::modificaTuAtributoCoeficiente(double coeficiente){
    this->coeficiente = coeficiente;
}
int Monomio::dameTuAtributoExponente(void){
    return this->exponente;
}
void Monomio::modificaTuAtributoExponente(int exponente){
    this->exponente = exponente;
}


//Funciones relacionadas con la clase

Monomio suma(Monomio A, Monomio B){
    Monomio C;
    C.modificaTuAtributoCoeficiente(
        A.dameTuAtributoCoeficiente()
        +
        B.dameTuAtributoCoeficiente()
    );
    C.modificaTuAtributoExponente(A.dameTuAtributoExponente());
    return C;
}
Monomio resta(Monomio A, Monomio B){
    Monomio C;
    C.modificaTuAtributoCoeficiente(
        A.dameTuAtributoCoeficiente()
        -
        B.dameTuAtributoCoeficiente()
    );
    C.modificaTuAtributoExponente(A.dameTuAtributoExponente());
    return C;
}
Monomio multiplica(Monomio A, Monomio B){
    Monomio C;
    C.modificaTuAtributoCoeficiente(
        A.dameTuAtributoCoeficiente()
        *
        B.dameTuAtributoCoeficiente()
    );
    C.modificaTuAtributoExponente(
        A.dameTuAtributoExponente()
        +
        B.dameTuAtributoExponente()
    );
    return C;
}
Monomio divide(Monomio A, Monomio B){
    Monomio C;
    C.modificaTuAtributoCoeficiente(
        A.dameTuAtributoCoeficiente()
        /
        B.dameTuAtributoCoeficiente()
    );
    C.modificaTuAtributoExponente(
        A.dameTuAtributoExponente()
        -
        B.dameTuAtributoExponente()
    );
    return C;
}

