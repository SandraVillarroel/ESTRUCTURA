
#include "TipoDato.h"

#define MAX 100
/*************************************************************/
//                      pila.h
/*************************************************************/
class Pila
{
private:
    TipoDato pila[MAX];
    int cima;

public:
    Pila();
    bool Apilar(TipoDato& elemento);
    bool Desapilar();
    bool CimaPila(TipoDato& elemento);
    void LimpiarPila();
    void VerPila();
    bool PilaVacia();
    //bool Iguales(Pila p);

};
