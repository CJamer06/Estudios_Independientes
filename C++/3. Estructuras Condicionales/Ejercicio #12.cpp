/*12. Hacer un menú que considere las siguientes opciones.

caso 1: Cubo de un numero
caso 2: Numero par o impar
caso 3: salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int N1, N2, Op;

    cout<<"\t MENU \n";
    cout<<"1. Cubo de un numero"<<endl;
    cout<<"2. Numero par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";cin>>Op;

    switch (Op)
    {
    case 1:
        cout<<"\t--CUBO DE UN NUMERO--\n";
        cout<<"Ingrese un numero: ";cin>>N1;
        cout<<"El resultado es: "<<pow(N1,3)<<endl;
        break;
    case 2:
        cout<<"\t--NUMERO PAR O IMPAR--\n";
        cout<<"Ingrese un numero: ";cin>>N2;
        if (N2%2 == 0)
        {
            cout<<"El numero es par"<<endl;
        }
        else
        {
            cout<<"El numero es impar"<<endl;
        }
        break;
    case 3:
        cout<<"Gracias por usar este codigo"<<endl;
        break;
    default:
        cout<<"Valor invalido"<<endl;
        break;
    }
    return 0;
}