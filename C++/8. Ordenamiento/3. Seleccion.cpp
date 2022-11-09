/* Ordenamiento por Seleccion

Es un algoritmo de ordenamiento que requiere O(n²) operaciones para ordenar una lista de n numeros. Su funcionamiento es el 
siguiente:

1. Busca el minimo elemento de la lista.
2, Intercambiar con el primer elemento.
3. Buscar el minimo del resto de la lista.
4. Intercambiar con el segundo.
5. Y asi sucesivamente.

Ejemplo:

Buscamos el numero menor lo ponemos al rincipio y despues nos ubicamos una casilla despues
 1°
|4||3||1||5||2|
       ^
       Es el menor y lo remplazamos con el primero.

    1°
|1||3||4||5||2|
             ^
             Es el menor y lo remplazamos con el primero.

       1°
|1||2||4||5||3|
             ^
             Es el menor y lo remplazamos con el primero.

          1°
|1||2||3||5||4|
             ^
             Es el menor y lo remplazamos con el primero.

|1||2||3||4||5|
            
*/

#include<iostream>

using namespace std;

int main()
{
    int NUM[]={4,2,3,1,5}, i, min, aux;

    for (i = 0; i < 5; i++)
    {
       min = i;

       for (int o = i+1; o < 5; o++)
       {
           if (NUM[o] < NUM[min])
           {
               min = o;
           }
           
       }
       aux = NUM[i];
       NUM[i] = NUM[min];
       NUM[min] = aux;
    }
    
    cout<<"Acendente: \n";
    for (i = 0; i < 5; i++)
    {
        cout<<NUM[i]<<" ";
    }
    
    cout<<"Decendente: \n";
    for (i = 4; i >= 0; i--)
    {
        cout<<NUM[i]<<" ";
    }
    cout<<endl;

    return 0;
}