//Devolver valores multiples

#include<iostream>

using namespace std;

void CALC(int, int, int&, int&);

int main()
{
    int N1, N2, SUM = 0, MUL = 0;

    cout<<"Digite 2 numeros: ";cin>>N1>>N2;

    CALC(N1,N2,SUM,MUL);
    /*
    AL modificarse los datos en la memoria solo llamamos a estos espacios y nos mostraran lo modificado
    en la funcion.
    */
    cout<<N1<<"+"<<N2<<" = "<<SUM<<endl;
    cout<<N1<<"*"<<N2<<" = "<<MUL<<endl;

    system("pause");
    return 0;
}

void CALC(int N1, int N2, int& SUM, int& MUL)
{
    SUM = N1+N2;
    MUL = N1*N2;
}