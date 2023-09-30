/*1. Hacer una estructura llamada corredor, en la cual se tendrán los siguientes campos: Nombre, edad,
sexo, club, pedir datos al usuario para un corredor y asignar le una categoria de competicion:

- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años  

Posterior mente imprimir todos los datos del corredor, incluida su categoria de competicion.
*/

#include<iostream>
#include<string.h>
#include<locale.h>
using namespace std;

struct CORREDOR
{
    char NOM[50], CAT[8];
    char SEX[2], NCLUB[50];
    int EDAD;
}CORREDORES;

int main()
{
    setlocale(LC_ALL,"spanish");
    int n = 0;
    char J[] = "Juvenil", S[] = "Señor", V[] = "Veterano";

        cout<<"Nombre: ";cin.getline(CORREDORES.NOM,50,'\n'); 
        cout<<"Edad:";cin>>CORREDORES.EDAD;
        if(CORREDORES.EDAD <= 18)
        {
            strcpy(CORREDORES.CAT,J);
        }
        else if(CORREDORES.EDAD <= 40)
        {
            strcpy(CORREDORES.CAT,S);
        }
        else if(CORREDORES.EDAD > 40)
        {
            strcpy(CORREDORES.CAT,V);
        }
        else if (CORREDORES.EDAD < 1 || CORREDORES.EDAD > 100)
        {
            cout<<"--Error--\n";
            do
            {
                cout<<"Edad:";cin>>CORREDORES.EDAD;
            } while (CORREDORES.EDAD > 1 && CORREDORES.EDAD < 100);
        }
        cout<<"Sexo [M ó F]: ";cin>>CORREDORES.SEX;

        cin.ignore(); //alternativa al fflush(stdin);  Limpia el bufer. 
        cout<<"Nombre del club: ";cin.getline(CORREDORES.NCLUB,50,'\n');

        cout<<"Nombre: "<<CORREDORES.NOM<<endl;
        cout<<"Edad:"<<CORREDORES.EDAD<<endl;
        cout<<"Sexo [M ó F]: "<<CORREDORES.SEX<<endl;
        cout<<"Nombre del club: "<<CORREDORES.NCLUB<<endl;
        cout<<"Categoria: "<<CORREDORES.CAT<<endl;
    return 0;
}