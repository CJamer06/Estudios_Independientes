/*5. Escriba una plantilla de función llamada despliegue() que despliegue el valor del 
argumento único que se le transmite cuando es invocada la función.
*/

#include<iostream>

using namespace std;

template <class TIPOD>
void despliegue(TIPOD dato);

int main()
{

    int dato = 1;
    float dato2 =  2.1;
    double dato3 = 567.7890;
    char dato4 = 'a';

    despliegue(dato);
    despliegue(dato2);
    despliegue(dato3);   
    despliegue(dato4); 
    system("pause");
    return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato)
{
    cout<<"El dato es: "<<dato<<endl;
}