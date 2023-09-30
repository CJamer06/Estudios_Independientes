/*7. La calificacion final de un estudiante es la media ponderada de tres notas: La nota de practica que cuenta 
un 30% del total, la nota teorica que cuenta un 60% y la nota de participacion que cuenta el 10% restantes. 
Escriba un programa que lea de entrada estandar las tres notas de un alumno y escriba en la salida estandar
su nota final*/

#include<iostream>

using namespace std; 

int main()
{
    float N1 = 0, N2 = 0, N3 = 0, NF = 0;

    cout<<"Nota de practica: ";cin>>N1;
    cout<<"Nota de teorica: ";cin>>N2;
    cout<<"Nota de participacion: ";cin>>N3;

    NF = (N1*0.3)+(N2*0.6)+(N3*0.1);

    cout<<"\nLa nota definitiva es: "<<NF<<endl;
    return 0;
}