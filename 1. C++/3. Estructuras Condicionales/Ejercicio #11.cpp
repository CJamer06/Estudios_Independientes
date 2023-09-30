//11. Hacer un programa que simule un cajero automatico con un saldo inicial de 1000 Dolares

#include<iostream>

using namespace std;

int main()
{
    int Inicial = 1000, Op, Ingresar, Final, Retirar;

    cout<<"\t MENU \n";
    cout<<"1. Ingresar dinero"<<endl;
    cout<<"2. Retirar dinero"<<endl;
    cout<<"Opcion: "; cin>>Op;

    switch (Op)
    {
    case 1:
        cout<<"Cuando desea ingresar: ";cin>>Ingresar;
        Final = Inicial + Ingresar;
        break;
    case 2:
        cout<<"Cuando desea retirar: ";cin>>Retirar;
        Final = Inicial - Retirar;
        break;
    default:
        break;
    }

    cout<<"Su saldo final es de "<<Final<<endl;
    return 0; 
}