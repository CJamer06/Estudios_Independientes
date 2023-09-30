/* Sentencia Switch (Condicionales multiples)

    switch(exprecion)
    {
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjunto de instrucciones2;
            break;
        case literal3:
            conjunto de instrucciones3;
            break;
        .
        .
        .
        default:
            conjunto de instrucciones por defecto;
            break;
    }
*/

#include<iostream>

using namespace std;

int main()
{
    int numero;

    cout<<"Digite un numero entre 1 y 5: ";cin>>numero;
    switch(numero)
    {
        case 1:
            cout<<"Es el numero 1"<<endl;
            break;
        case 2:
            cout<<"Es el numero 2"<<endl;
            break;
        case 3:
            cout<<"Es el numero 3"<<endl;
            break;
        case 4:
            cout<<"Es el numero 4"<<endl;
            break;
        case 5:
            cout<<"Es el numero 5"<<endl;
            break;
        default:
            cout<<"No esta en el rango de 1 a 5"<<endl;
            break;
    }
    return 0;
}
