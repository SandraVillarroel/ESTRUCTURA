// Ejemplopilaestatica.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
// Ejemplopilaestatica.cpp : Defines the entry point for the console application.
//


#include "Pila.h"
#include "TipoDato.h"
#include <iostream>
using namespace std;

int main()
{
	int N, codigo;
	string Desc;
	Pila pilita1;
	TipoDato tipito;
	tipito.set_TipoDato(1, "chompas");
	pilita1.Apilar(tipito);
	pilita1.VerPila();
	cout << "Ingrese el numero de elementos a ingresar:",
		cin >> N;
	for(int i=0;i<N; i++)
	return 0;
	{
		cout << "Ingrese el codigo del producto:";
		cin >> codigo;
		cout << "Ingresa la descripcion delproducto:";
		cin >> Desc;
		tipito.set_TipoDato(codigo, Desc);
		pilita1.Apilar(tipito);
	}
	
	pilita1.VerPila(); 
}

