# ESTRUCTURA SANDRAVILLARROEL
#include <iostream>
using namespace std;
//prototipo de funciones
float circulo();
int menor();
int suma();

int menor(int a, int b, int c);

//cuerpo principal
int main()
{
    int opcion;
    do{
        cout << "Menu \n";
        cout << "1.Area del circulo\n";
        cout << "2.Numero menor \n";
        cout << "3.suma \n";
        cout << "0.SALIR \n";
        cout << "Opcion:";
        cin >> opcion;
        switch (opcion)
        {
            case 1:
                circulo();
                break;
            case 2:
                menor();
                break;
            case 3:
                if (suma())
                    cout << "La suma es:";
                break;
            case 0:
                cout << "salir\n";
            default:
                cout << "opcion incorrecta\n";
        }
        system("pause");
        system("cls");
    } while (opcion != 0);
    return 0;
}


float circulo()
{
    float radio;
    float pi = 3.1416, area;
    cout << "Ingrese el valor del radio:\n"; cin >> radio;
    area = pi*(radio*radio);
    cout << "El area del circulo es:" << area << endl;
    return area;
}
int menor()
{
    int a,b,c,m;
    cout<<"ingrese tres numeros\n";
    cin>>a>>b>>c;
    m=menor(a,b,c);
    cout<<"el menor es: "<<m<<endl;
    cin.ignore();
    return 0;
}

int menor(int a, int b, int c) {
    int n;
    if(a<b)
        if(a<c)
            n=a;
        else
            n=c;
    else
    if(b<c)
        n=b;
    else
        n=c;
    return n;

}

int suma()
{
    int suma,a, b;
    cout<<"ingrese el numero a"<<endl;
    cin>>a;
    cout<<"ingrese el numero b"<<endl;
    cin>>b;
    suma=a+b;
    cout<<"la suma es:"<<suma<<endl;
    return suma;
}
