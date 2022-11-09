//Comprueba si un número digitado por el usuario es positivo o negativo.


#include<iostream>

using namespace std;

int main()
{
    int Num = 0;

    cout<<"Ingrese un valor: ";cin>>Num;

    if(Num > 0)
    {
        cout<<"El numero es positivo"<<endl;
    }
    else if(Num < 0)
    {
        cout<<"El numero es negativo"<<endl;
    }
    else
    {
        cout<<"Ambos son 0"<<endl;
    }
    return 0;
}