/*6. Escriba una plantilla de función llamada maximo() que devuelva el valor máximo de tres 
argumentos que se transmitan a la función cuando sea llamada. Suponga que los tres argumentos serán 
del mismo tipo de datos.*/

#include<iostream>

using namespace std;

template <class TIPOD>
void maximo(TIPOD x,TIPOD y,TIPOD z);

int main()
{
    float NUM1, NUM2, NUM3;

    cout<<"Valor 1: ";cin>>NUM1;
    cout<<"Valor 2: ";cin>>NUM2;
    cout<<"Valor 3: ";cin>>NUM3;
    maximo(NUM1, NUM2, NUM3);
    return 0;
}

template <class TIPOD> 
void maximo(TIPOD x,TIPOD y,TIPOD z)
{
    if(x>y && x>z)
    {
        cout<<"Valor mayor es: "<<x<<endl;
    }
    else if(y>z && y>x)
    {
        cout<<"Valor mayor es: "<<y<<endl;
    }
    else if(z>x && z>y)
    {
        cout<<"Valor mayor es: "<<z<<endl;
    }
}