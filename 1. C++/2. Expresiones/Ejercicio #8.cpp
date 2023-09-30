/*8. escriba un programa que lea de laentrada estandar los 2 catetos de un triangulo y escriba en la salida 
estandar su hipotenusa*/

#include<iostream>
#include<math.h>

using namespace std;

int main()
{
    float c1, c2, hip = 0, res = 0;

    cout<<"Digite el cateto 1: ";cin>>c1;
    cout<<"Digite el cateto 2: ";cin>>c2;

    res = pow(2,c1)+ pow(2,c2);
    hip = sqrt(res);

    cout<<"\nEl valor de la hipotenusa es: "<<hip<<endl;
    return 0;
}