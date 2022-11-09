/*6. Escriba un programa que lea de la entrada estandar si el caracter es una vocal minuscula, es una vocal 
mayuscula o no es una vocal*/

#include<iostream>

using namespace std;

int main()
{
    char Caracter;
    cout<<"Digite un caracter: ";cin>>Caracter;

    switch (Caracter)
    {
    case 'a':
        cout<<"Es una vocal minuscula"<<endl;
        break;
    case 'A':
        cout<<"Es una vocal mayuscula"<<endl;
        break;
    case 'e':
        cout<<"Es una vocal mayuscula"<<endl;
        break;
    case 'E':
        cout<<"Es una vocal minuscula"<<endl;
        break;
    case 'i':
        cout<<"Es una vocal mayuscula"<<endl;
        break;
    case 'I':
        cout<<"Es una vocal mayuscula"<<endl;
        break;
    case 'o':
        cout<<"Es una vocal mayuscula"<<endl;
        break;
    case 'O':
        cout<<"Es una vocal mayuscula"<<endl;
        break;
    case 'u':
        cout<<"Es una vocal minuscula"<<endl;
        break;
    case 'U':
        cout<<"Es una vocal mayuscula"<<endl;
        break;

    default:
        cout<<"No es una vocal"<<endl;
        break;
    }
    return 0;
}