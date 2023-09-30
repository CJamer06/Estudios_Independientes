/*8. Defina una estructura que sirva para representar a una persona. La estructura debe contener dos 
campos: el nombre de la persona y un valor de tipo lógico que indica si la persona tiene algún tipo 
de discapacidad. Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno 
que contenga las personas que no tienen ninguna discapacidad y otro que contenga las personas con 
discapacidad.*/

#include<iostream>
#include<string.h>

using namespace std;

struct RP
{
    char NOM[50];
};


int main()
{
    int N, AUX2 = 0, AUX3 = 0;
    cout<<"Numero de personas: ";cin>>N;

    char AUX[3];
    int DIS1[N], DIS2[N];
    struct RP V[N];
    
    for (int i = 0; i < N; i++)
    {
        cin.ignore(); //Limpia el buffer
        cout<<"Nombre: ";cin.getline(V[i].NOM,50,'\n');
        cout<<"Discapacidad [Si - No]: ";cin>>AUX;

        if (strcmp(AUX,"Si") == 0 || strcmp(AUX,"SI") == 0 || strcmp(AUX,"si") == 0)
        {
            DIS1[AUX2] = i;
            AUX2++;
        }
        else
        {
            DIS2[AUX3] = i;
            AUX3++;
        }
    }
    
    cout<<"\nDiscapacitados\n";
    for (int i = 0; i < AUX2; i++)
    {
        cout<<"Nombre: "<<V[DIS1[i]].NOM<<endl;
    }

    cout<<"\nNo discapacitados\n";
    for (int i = 0; i < AUX3; i++)
    {
        cout<<"Nombre: "<<V[DIS2[i]].NOM<<endl;
    }
    
    return 0;
}