/*10. Escriba un programa que calcule las soluciones de una ecuacion de segundo grado de la forma ax²+bc+c = 0
teniendo en cuenta la formula cuadratica.*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float a, b, c, px = 0, nx = 0;

    cout<<"Digite 'a','b','c' para ax²+bx+c = 0.\n";
    cout<<"a = ";cin>>a;
    cout<<"b = ";cin>>b;
    cout<<"c = ";cin>>c;

    px = ((-b + (sqrt((pow(b,2)-(4*a*c)))))/(2*a));
    nx = ((-b - (sqrt((pow(b,2)-(4*a*c)))))/(2*a));
    
    cout<<"El resultado de "<<a<<"x²+"<<b<<"x + "<<c<<" es: x⁺ = "<<px<<" ; x⁻ = "<<nx<<endl;

    return 0;
}