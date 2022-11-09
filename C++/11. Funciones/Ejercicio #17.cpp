//17. suma de numeros complejos

#include<iostream>

using namespace std;

struct complejo
{float real, imaginario;
}z1,z2;

void PD();
complejo suma (complejo, complejo);
void muestra (complejo);

int main()
{
    PD();
    complejo x = suma(z1,z2);
    muestra(x);
    system("pause");
    return 0;
}

void PD()
{
    cout<<"Digite los datos para el primer numero Complejo: "<<endl;
    cout<<"Parte real: ";cin>>z1.real;
    cout<<"Parte imaginaria: ";cin>>z1.imaginario;

    cout<<"\nDigite los datos para el segundo numero Complejo: "<<endl;
    cout<<"Parte real: ";cin>>z2.real;
    cout<<"Parte imaginaria: ";cin>>z2.imaginario;
}

complejo suma (complejo z1, complejo z2)
{
    z1.real += z2.real;
    z1.imaginario += z2.imaginario;

    return z1;
}

void muestra(complejo x)
{
    cout<<"Resultado de la suma: "<<x.real<<","<<x.imaginario<<endl;
}