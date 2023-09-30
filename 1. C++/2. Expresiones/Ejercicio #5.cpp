//5. Escribe un fragmento de programa que intercambie los valores de 2 variables

#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 0, aux = 0;   

    cout<<"Ingrese el valor de 'x': "; cin>>x;
    cout<<"Ingrese el valor de 'y': "; cin>>y;

    aux = x;
    x = y;
    y = aux;

    cout<<"\nEl nuevo valor de x es : "<<x<<endl;
    cout<<"El nuevo valor de y es : "<<y<<endl;
    return 0;
}