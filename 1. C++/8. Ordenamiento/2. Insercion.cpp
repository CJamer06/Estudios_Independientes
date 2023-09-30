/*Ordenamiento por insercion

Es una manera muy natural de ordenar para un ser humano, y puede usarse facilmente para ordenar un mazo de cartas numeradas de
forma arbitrarias. Requiere O(n²) operaciones para ordenar una lista de n elementos.

Ejemplo: 
ACENDENTE

Consta de comprobar si el elemento a su izquierda es menor y si NUM_Izq > NUM_ Act = Cambio

|5||3||4||1||2|
 ^
 A su izquierda o hay nada

|5||3||4||1||2|     =     |3||5||4||1||2|     
    ^                       
    Cambio

|3||5||4||1||2|     =     |3||4||5||1||2|     
       ^                       
       Cambio

|3||4||5||1||2|     =     |1||3||4||5||2|     
          ^                       
          Cambio

|1||3||4||5||2|     =     |1||2||3||4||5|   
             ^                       
             Cambio

|1||2||3||4||5| = Ordenado.

*/

#include<iostream>

using namespace std;

int main()
{
    int NUM[]={4,2,3,1,5}, i, pos, aux;

    for (i = 0; i < 5; i++)
    {
        pos = i;
        aux = NUM[i];

        while ((pos>0) && (NUM[pos-1] > aux))
        {
            NUM[pos] = NUM[pos-1];
            pos--;
        }  
        NUM[pos] = aux;
    }
    
    cout<<"Acendente\n";
    for (i = 0; i < 5; i++)
    {
        cout<<NUM[i]<<" ";
    }

    cout<<"\nDecendente\n";
    for (i = 4; i >= 0; i--)
    {
        cout<<NUM[i]<<" ";
    }

    return 0;
}