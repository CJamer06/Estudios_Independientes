/*Arreglos dinámicos

En programación, un array dinámico, más apropiadamente llamado arreglo dinámico, también llamado 
inapropiadamente matriz dinámica o tabla dinámica, es un arreglo de elementos que crece o mengua 
dinámicamente conforme los elementos se agregan o se eliminan. Se suministra como librerías estándar 
en muchos lenguajes modernos de programación.

Para esto usaremos dos operadores que son:

new : Reserva el numero de bytes solicitado por la declaracion.
delete : libera un bloque de bytes reservado con anterioridad.

Ejercicio: pedir al usuario - n - calificaciones y alamacenarlas en un arreglo dinamico.
*/

#include<iostream>
#include<stdlib.h> //new y delete
using namespace std;

void PN(); //Pedir notas
void Mostrar();

int NumCal;
int *p; //Puntero global.

int main()
{
    PN();
    Mostrar();

    delete[] p; //Libreamos el espacion en bytes usado anteririormente
    system("pause");
    return 0;
}

void PN()
{
    cout<<"Digite el numero de calificaciones: ";cin>>NumCal;
    p = new int[NumCal]; //Crear el arreglo.

    for (int i = 0; i < NumCal; i++)
    {
        cout<<"Ingrese una nota #"<<i+1<<": ";cin>>p[i];
    } 
}

void Mostrar()
{
    cout<<"\n\nMostrar nostas del ususario:\n";
    for (int i = 0; i < NumCal; i++)
    {
        cout<<"Nota #"<<i+1<<": "<<p[i]<<endl;
    }
}