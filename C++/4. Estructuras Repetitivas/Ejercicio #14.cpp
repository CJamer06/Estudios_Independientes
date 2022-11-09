/*14. En una clase de 5 alumnos se han realizado 3 examenes y se requiere determinar el numero
de:

a) Alumnos que aprobaron todos los examnes.
b) Alumnos que aprobaron almenos un examen.
c) Alumnos que aprobaron unicamente el ultimo examen.

Realice un programa que permita calcular la lectura de los datos y el calculo de las 
estadisticas
*/

#include<iostream>

using namespace std;

int main()
{
    float Ex1, Ex2, Ex3, G1 = 0, ULT = 0, G3 = 0;
    for (int i = 0; i < 5; i++)
    {
        cout<<"\nEstudiate #"<<i+1<<endl;
        cout<<"Examen #1: ";cin>>Ex1;
        cout<<"Examen #2: ";cin>>Ex2;
        cout<<"Examen #3: ";cin>>Ex3;

        if(Ex1 >= 3 && Ex2 >= 3 && Ex3 >= 3)
        {
            G3++;
        }
        
        if(Ex1 >= 3 || Ex2 >= 3 || Ex3 >= 3)
        {
            G1++;
        }
        
        if (Ex1 < 3 && Ex2 < 3 && Ex3 >= 3)
        {
            ULT++;
        }
    }
    cout<<"El numero de estudiates que ganaron los 3 examenes es: "<<G3<<endl;
    cout<<"El numero de estudiates que ganaron almenos 1 examenes es: "<<G1<<endl;
    cout<<"El numero de estudiates que ganaron solo el ultimo examenes es: "<<ULT<<endl;
    return 0;
}