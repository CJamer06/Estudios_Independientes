//7. Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia.

#include<iostream>

using namespace std;

void cambio(int&,int&, int);

int main()
{
    int N1,N2, AUX;

    cout<<"Digite 2 numeros: ";cin>>N1>>N2;

    cout<<"EL valor 1: "<<N1<<endl;
    cout<<"El valor 2: "<<N2<<endl;

    cambio(N1,N2,AUX);

    cout<<"EL valor 1: "<<N1<<endl;
    cout<<"El valor 2: "<<N2<<endl;

    system("pause");
    return 0;
}

void cambio(int& NUM1,int& NUM2,int AUX)
{
    AUX = NUM1;
    NUM1 = NUM2;
    NUM2 = AUX;
}