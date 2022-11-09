//9. Realice un programa que calcule el valor que toma la siguiente funcion para unos valores dados de x e y.

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float x,y, res = 0;

    cout<<"Digite los valores de 'x' e 'y' para la funcion antes mencionada: "<<endl;
    cout<<"x: ";cin>>x;
    cout<<"y: ";cin>>y;

    res = sqrt(x)/(pow(2,y)-1);

    cout<<"La funcion es igual a: "<<res<<" cuando x = "<< x <<";  y = "<< y <<endl;
    return 0;
}