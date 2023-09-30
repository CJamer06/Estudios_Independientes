/*5. Escriba un programa que lea de la entrada estandar un caracter e indique en la salida estandar si el 
caracter es una vocal minuscula o mayuscula*/

#include <iostream>

using namespace std;

int main()
{
    char Op;

    cout<<"Digite una vocal: ";cin>>Op;

    switch (Op)
    {
    case 'a':
        cout<<"La vocal es minuscula"<<endl;
        break;

    case 'e':
        cout<<"La vocal es minuscula"<<endl;
        break;

    case 'i':
        cout<<"La vocal es minuscula"<<endl;
        break;

    case 'o':
        cout<<"La vocal es minuscula"<<endl;
        break;

    case 'u':
        cout<<"La vocal es minuscula"<<endl;
        break;

    default:
        cout<<"La vocal es mayuscula"<<endl;
        break;
    }
    return 0;
}