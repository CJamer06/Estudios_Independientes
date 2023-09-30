//Transforma una cadena a numeros - función atoi() y atof()

#include<iostream>
#include<stdlib.h>

using namespace std;

int main()
{
    char CAD[]="123", CAD2[]="3.14";
    int NUM;
    float NUM2;

    NUM = atoi(CAD);
    NUM2 = atof(CAD2);
    cout<<"Usamos atoi(): "<<NUM<<endl;
    cout<<"Usamos atof(): "<<NUM2<<endl;
    return 0;
}