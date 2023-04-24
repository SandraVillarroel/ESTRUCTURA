

#include <iostream>
#include "Pila.h"
#include "TipoDato.h"

using namespace std;

Pila::Pila()
{
	cima = -1;
}

bool Pila::Apilar(TipoDato& elemento)
{
	bool res;
	if (cima == MAX - 1)
	{
		cout << "Desbordamiento de Pila (Overflow)" << endl;
		res = false; //return false;
	}
	else

	{
		cima++;
		pila[cima] = elemento;
		res = true; //return true;
	}
	return res;
}

bool Pila::Desapilar()
{
	bool res;
	if (cima == -1)
	{
		cout << "Se esta intentando quitar un elemento de una pila vacia (underflow)" << endl;
		res = false;
	}
	else

	{
		cima--;
		res = true;
	}
	return res;
}

void Pila::VerPila()
{
	for (int i = 0; i <= cima; i++)
	{
		cout << pila[i].id << endl;
		cout << pila[i].descripcion << endl;
	}
}


bool Pila::CimaPila(TipoDato& elemento)
{
	// Muestra el Elemento de la Cima
	bool res;
	if (PilaVacia())//(cima == -1)
	{
		cerr << "Se esta intentando quitar un elemento de una pila vacia (underflow)" << endl;
		res = false;
	}
	else

	{
		cout << pila[cima].id;
		cout << pila[cima].descripcion;
		res = true;
	}
	return res;
}

bool Pila::PilaVacia()
{
	return cima == -1;
}

void Pila::LimpiarPila()
{
	cima = -1;
}


/*bool Pila::Iguales(Pila p)
{
TipoDato a , b;
TipoDato a2[MAX];

bool iguales=false;

int i=cima;
while (p.CimaPila(b) && a2[i--].id==b.id)
{
	p.Desapilar();
}
if(i<0 && p.PilaVacia())
iguales=true;

return iguales;
} */