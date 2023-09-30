/*Parametros por referencia

El paso de parámetros por referencia consiste en proporcionar a la subrutina a la que se le quiere 
pasar el argumento la dirección de memoria del dato. En este caso se tiene un único valor referenciado
(o apuntado) desde dos puntos diferentes, el programa principal y la subrutina a la que se le pasa el
argumento, por lo que cualquier acción sobre el parámetro se realiza sobre la misma posición de 
memoria.

Para eso existe el - & - que señala al espacio de memoria. 
*/

#include<iostream>

using namespace std;

void valnuevo(int&, int&);

int main()
{
    int NUM1,NUM2;

    cout<<"Digite dos numeros: ";cin>>NUM1>>NUM2;

    valnuevo(NUM1,NUM2);

    //No es necesario retornar, ya que se modifico el espacio en memoria y eso es general.

    cout<<"El nuevo valor 1: "<<NUM1<<endl;
    cout<<"El nuevo valor 2: "<<NUM2<<endl;

    system("pause");
    return 0;
}

void valnuevo(int& xnum, int& ynum) //Pasamos la direccion de memoria mas no los valores.
{
    cout<<"El valor 1: "<<xnum<<endl;
    cout<<"El valor 2: "<<ynum<<endl;

    //Remplazamos los valores en el espacio de memoria

    xnum = 10;
    ynum = 20;
}