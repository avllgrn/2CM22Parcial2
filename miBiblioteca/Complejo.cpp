#include "Complejo.h"


//Metodos de la clase

Complejo::Complejo(void){
    Complejo::real = 0.0;
    Complejo::imaginario = 0.0;
    //cout<<"Objeto construido por Complejo(void)"<<endl;
}
Complejo::Complejo(double real, double imaginario){
    Complejo::real = real;
    Complejo::imaginario = imaginario;
    //cout<<"Objeto construido por Complejo(double real, double imaginario)"<<endl;
}
Complejo::~Complejo(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Complejo::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi real ";
    cin >> this->real;
    cout << "Dame mi imaginario ";
    cin >> this->imaginario;
}
void Complejo::muestraTuEstado(void){
    cout << this->real;
    if(imaginario<0)
        cout << this->imaginario << "i";
    else
        cout << "+" << this->imaginario << "i";
}
double Complejo::dameTuAtributoReal(void){
    return this->real;
}
void Complejo::modificaTuAtributoReal(double real){
    this->real = real;
}
double Complejo::dameTuAtributoImaginario(void){
    return this->imaginario;
}
void Complejo::modificaTuAtributoImaginario(double imaginario){
    this->imaginario = imaginario;
}


//Funciones relacionadas con la clase

Complejo suma(Complejo A, Complejo B){
    Complejo C;
    C.modificaTuAtributoReal( A.dameTuAtributoReal() + B.dameTuAtributoReal() );
    C.modificaTuAtributoImaginario( A.dameTuAtributoImaginario() + B.dameTuAtributoImaginario() );
    return C;
}
Complejo resta(Complejo A, Complejo B){
    Complejo C;
    C.modificaTuAtributoReal( A.dameTuAtributoReal() - B.dameTuAtributoReal() );
    C.modificaTuAtributoImaginario( A.dameTuAtributoImaginario() - B.dameTuAtributoImaginario() );
    return C;
}
Complejo multiplica(Complejo A, Complejo B){
    Complejo C;
    C.modificaTuAtributoReal(
        A.dameTuAtributoReal() * B.dameTuAtributoReal()
        -
        A.dameTuAtributoImaginario() * B.dameTuAtributoImaginario()
    );
    C.modificaTuAtributoImaginario(
        A.dameTuAtributoReal() * B.dameTuAtributoImaginario()
        +
        A.dameTuAtributoImaginario() * B.dameTuAtributoReal()
    );
    return C;
}
Complejo divide(Complejo A, Complejo B){
    Complejo C;
    C.modificaTuAtributoReal(
        (
        A.dameTuAtributoReal() * B.dameTuAtributoReal()
        +
        A.dameTuAtributoImaginario() * B.dameTuAtributoImaginario()
        )
        /
        (
        pow(B.dameTuAtributoReal(),2)+pow(B.dameTuAtributoImaginario(),2)
        )
    );
    C.modificaTuAtributoImaginario(
        (
        B.dameTuAtributoReal() * A.dameTuAtributoImaginario()
        -
        A.dameTuAtributoReal() * B.dameTuAtributoImaginario()
        )
        /
        (
        pow(B.dameTuAtributoReal(),2)+pow(B.dameTuAtributoImaginario(),2)
        )
    );
    return C;
}

