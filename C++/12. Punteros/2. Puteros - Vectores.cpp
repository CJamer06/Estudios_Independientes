/*Correspondencia de punteros en vectores.

Aunque los punteros son, por definición, tan sólo variables usadas para almacenar direcciones,
también existe una relación directa y estrecha entre los nombres de los arreglos y los punteros.

*/

#include<iostream>
using namespace std;

int main()
{
    int numeros[] = {1,2,3,4,5};
    int *p; //Declaracion de una variable tipo Puntero

    p = &numeros[0]; 
    // p = numero; Forma corta.
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Elemento del vector ["<<i<<"]: "<<*p++<<endl; 
        //Aca estamos mostrando el vector aumentando el puntero para que cambie de posición.
    }

    system("pause");
    return 0;
}