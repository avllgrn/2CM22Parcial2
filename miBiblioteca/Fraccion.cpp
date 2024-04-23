#include "Fraccion.h"


//Metodos de la clase

Fraccion::Fraccion(void){
    Fraccion::numerador = 0;
    Fraccion::denominador = 1;
    //cout<<"Objeto construido por Fraccion(void)"<<endl;
}
Fraccion::Fraccion(int numerador, int denominador){
    Fraccion::numerador = numerador;
    Fraccion::denominador = denominador;
    Fraccion::verificaTuEstado();
    //cout<<"Objeto construido por Fraccion(int numerador, int denominador)"<<endl;
}
Fraccion::~Fraccion(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Fraccion::pideleAlUsuarioTuEstado(void){
    cout<<"Dame mi numerador ";
    cin>>this->numerador;
    cout<<"Dame mi denominador ";
    cin>>this->denominador;
    this->verificaTuEstado();
}
void Fraccion::muestraTuEstado(void){
    cout<<this->numerador<<"/"
    <<this->denominador;
}
int Fraccion::dameTuAtributoNumerador(void){
    return this->numerador;
}
void Fraccion::modificaTuAtributoNumerador(int numerador){
    this->numerador = numerador;
}
int Fraccion::dameTuAtributoDenominador(void){
    return this->denominador;
}
void Fraccion::modificaTuAtributoDenominador(int denominador){
    this->denominador = denominador;
    this->verificaTuEstado();
}
void Fraccion::verificaTuEstado(void){
    if(this->denominador == 0){
        this->numerador = 0;
        this->denominador = 1;
    }
    if(this->denominador < 0){
        this->numerador *= -1;
        this->denominador *= -1;
    }
}

//Funciones relacionadas con la clase

Fraccion suma(Fraccion A, Fraccion B){
    Fraccion C;
    C.modificaTuAtributoNumerador(
        A.dameTuAtributoNumerador()*B.dameTuAtributoDenominador()
        +
        B.dameTuAtributoNumerador()*A.dameTuAtributoDenominador()
    );
    C.modificaTuAtributoDenominador(
        A.dameTuAtributoDenominador()*B.dameTuAtributoDenominador()
    );
    return C;
}
Fraccion resta(Fraccion A, Fraccion B){
    Fraccion C;
    C.modificaTuAtributoNumerador(
        A.dameTuAtributoNumerador()*B.dameTuAtributoDenominador()
        -
        B.dameTuAtributoNumerador()*A.dameTuAtributoDenominador()
    );
    C.modificaTuAtributoDenominador(
        A.dameTuAtributoDenominador()*B.dameTuAtributoDenominador()
    );
    return C;
}
Fraccion multiplica(Fraccion A, Fraccion B){
    Fraccion C;
    C.modificaTuAtributoNumerador(
        A.dameTuAtributoNumerador()*B.dameTuAtributoNumerador()
    );
    C.modificaTuAtributoDenominador(
        A.dameTuAtributoDenominador()*B.dameTuAtributoDenominador()
    );
    return C;
}
Fraccion divide(Fraccion A, Fraccion B){
    Fraccion C;
    C.modificaTuAtributoNumerador(
        A.dameTuAtributoNumerador()*B.dameTuAtributoDenominador()
    );
    C.modificaTuAtributoDenominador(
        A.dameTuAtributoDenominador()*B.dameTuAtributoNumerador()
    );
    return C;
}
