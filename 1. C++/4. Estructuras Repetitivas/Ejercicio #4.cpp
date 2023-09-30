/*Escriba un programa que tome cada 4 horas la temperatura exterior, leyendola durante un 
periodo de 24 horas. Es decir debe leer 6 temperaturas. calcule la temperatura media del dia,
la temperatura mas alta y la mas baja*/

#include<iostream>

using namespace std;

int main()
{
    float TEM, MAY = 0, MEN = 99999, PROM = 0, SUM = 0;
    for (int i = 0; i < 24; i += 4)
    {
        cout<<"Ingrese la temperatura de la hora "<<i<<" : ";cin>>TEM;

        if (TEM > MAY)
        {
            MAY = TEM;
        }
        
        if (TEM < MEN)
        {
            MEN = TEM;
        } 

        SUM += TEM;
    }
    
    PROM = SUM/6;

    cout<<"La temperatura mayor fue de: "<<MAY<<endl;
    cout<<"La temperatura menor fue de: "<<MEN<<endl;
    cout<<"La temperatura promedio fue de: "<<PROM<<endl;
    return 0;
}