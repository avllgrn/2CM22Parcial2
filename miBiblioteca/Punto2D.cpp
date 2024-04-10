#include "Punto2D.h"


//Metodos de la clase

Punto2D::Punto2D(void){
    Punto2D::x = 0.0;
    Punto2D::y = 0.0;
    //cout<<"Objeto construido por Punto2D(void)"<<endl;
}
Punto2D::Punto2D(double x, double y){
    Punto2D::x = x;
    Punto2D::y = y;
    //cout<<"Objeto construido por Punto2D(double x, double y)"<<endl;
}
Punto2D::~Punto2D(void){
    //cout<<"Objeto destruido =)"<<endl;
}
void Punto2D::pideleAlUsuarioTuEstado(void){
    cout << "Dame mi x ";
    cin >> this->x;
    cout << "Dame mi y ";
    cin >> this->y;
}
void Punto2D::muestraTuEstado(void){
    cout << "(" << this->x << "," << this->y << ")";
}
double Punto2D::dameTuAtributoX(void){
    return this->x;
}
void Punto2D::modificaTuAtributoX(double x){
    this->x = x;
}
double Punto2D::dameTuAtributoY(void){
    return this->y;
}
void Punto2D::modificaTuAtributoY(double y){
    this->y = y;
}


//Funciones relacionadas con la clase

Punto2D suma(Punto2D A, Punto2D B){
    Punto2D C;
    C.modificaTuAtributoX(
        A.dameTuAtributoX()+B.dameTuAtributoX()
    );
    C.modificaTuAtributoY(
        A.dameTuAtributoY()+B.dameTuAtributoY()
    );
    return C;
}
Punto2D resta(Punto2D A, Punto2D B){
    Punto2D C;
    C.modificaTuAtributoX(
        A.dameTuAtributoX()-B.dameTuAtributoX()
    );
    C.modificaTuAtributoY(
        A.dameTuAtributoY()-B.dameTuAtributoY()
    );
    return C;
}
double distanciaEntre(Punto2D A, Punto2D B){
    double d;
    d = sqrt(pow(B.dameTuAtributoX()-A.dameTuAtributoX(),2)
             +
             pow(B.dameTuAtributoY()-A.dameTuAtributoY(),2)
    );
    return d;
}
double pendienteDados(Punto2D A, Punto2D B){
    double m;
    m = (B.dameTuAtributoY() - A.dameTuAtributoY())
        /
        (B.dameTuAtributoX() - A.dameTuAtributoX())
    ;
    return m;
}
