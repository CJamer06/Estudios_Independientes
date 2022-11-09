/*Metodo Burbuja

Es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento de la lista que va a ser ordenada con la siguiente,
intercambiadolos de posicion si estan en el orden equivocado. Es necesasrio revisar varias veces toda la lista hasta que no se 
necesiten mas cambios, lo cual significa que la lista esta ordenada.

|4||5||2||1||3| Ordenamos de menor a mayor

|4||5||2||1||3|
 ^  ^
 4< 5  No se modifica

 |4||5||2||1||3|
     ^  ^
     5> 2  Se modifica

 |4||2||5||1||3|
        ^  ^
        5> 1  Se modifica

 |4||2||1||5||3|
           ^  ^
           5> 3  Se modifica

 |4||2||1||3||5| 
 Entonces repetiriamos esto con todos los numeros por eso se considera al metodo Burbuja como el menos eficiente por lo lento
 o poco productivo que es.
 */

#include <iostream>

using namespace std;

int main()
{
    int NUM[]={4,1,2,3,5}, aux;

    for (int i = 0; i < 5; i++)
    {
        for (int o = 0; o < 5; o++)
        {
            if(NUM[o] > NUM[o+1])
            {
                aux = NUM[o];
                NUM[o] = NUM[o+1];
                NUM[o+1] = aux;
            }
        }
    }

    cout<<"Orden acendente: ";
    for (int i = 1; i <= 5; i++)
    {
        cout<<NUM[i]<<" ";
    }

    cout<<"\nOrden decendente: ";
    for (int i = 5; i >= 1; i--)
    {
        cout<<NUM[i]<<" ";
    }
    return 0;
}