/*7. Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura 
debe tener tres campos: horas, minutos y segundos. Escriba un programa que dado n etapas calcule el 
tiempo total empleado en correr todas las etapas.*/

#include<iostream>
using namespace std;

struct TEC
{
    int HOR, MIN, SEG;
};

int main()
{
    int N, SHOR = 0, SMIN = 0, SSEG = 0, AUX = 0;
    cout<<"Numero de etapas: ";cin>>N;
    struct TEC E[N];

    for (int i = 0; i < N; i++)
    {
        cout<<"Etapa #"<<i+1<<endl;
        cout<<"Horas: ";cin>>E[i].HOR;
        cout<<"Mintutos: ";cin>>E[i].MIN;
        cout<<"Segundos: ";cin>>E[i].SEG;

        SHOR += E[i].HOR;
        SMIN += E[i].MIN;
        SSEG += E[i].SEG;
        cout<<endl; 
    }
    
    if (SSEG/60 > 1)
    {
        AUX = SSEG/60;
        SMIN += AUX;
        SSEG -= (AUX*60);
    } 
    
    AUX = 0;

    if (SMIN/60 > 1)
    {
        AUX = SMIN/60;
        SHOR += AUX;
        SMIN -= (AUX*60);
    }

    cout<<"Tiempo empleados: "<<SHOR<<":"<<SMIN<<":"<<SSEG<<endl;

    system("pause");
    return 0;
}
