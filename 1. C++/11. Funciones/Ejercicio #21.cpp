/*21: Escriba una función recursiva que calcule un número elevado a una potencia entera mayor o igual
que cero: x^y. }*/

#include<iostream>

using namespace std;

int PD(int& , int&);
int POTENCIA(int, int, int, int);

int main()
{
    int B, E, Aux = 0, POW = 1;
    PD(B,E);
    cout<<B<<"^"<<E<<" = "<<POTENCIA(B,E,Aux, POW)<<endl;

    system("pause");
    return 0;
}

int PD(int& B, int& E)
{
    cout<<"Ingrese la base: ";cin>>B;
    cout<<"Ingrese el exponente: ";cin>>E;
}

int POTENCIA(int B, int E, int Aux, int POW)
{
    if (Aux < E)
    {
        POW *= B;
        return POTENCIA(B,E,Aux+1,POW);
    }
    else if(Aux == E)
    {
        return POW;
    }
}