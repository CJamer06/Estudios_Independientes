/*8. Pedir al usuario 2 cadenas de caracteres de numeros, uno entero y otro real, convertirlos a sus respectivos valores y por
ultimo sumarlos.*/

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    char CAD1[30], CAD2[30];
    int NUM1;
    float NUM2, SUM;

    cout<<"Digite un numero entero: ";cin.getline(CAD1,30,'\n');
    cout<<"Digite un numero real: ";cin.getline(CAD2,30,'\n');

    NUM1 = atoi(CAD1);
    NUM2 = atof(CAD2);
    SUM = NUM1 + NUM2;

    cout<<"EL resultado de la suma es: "<<SUM<<endl;

    return 0;
}