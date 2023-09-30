//5. Desarrolle un programa que lea de la entrada estandar un vector de enteros y determine el mayor elemento del vector

#include <iostream>

using namespace std;

int main()
{
    int NUM = 0, NUME[100], MAY = 0;
    cout<<"Numero de valores a ingrsar: ";cin>>NUM;

    for (int i = 0; i < NUM; i++)
    {
        cout<<"Digite el valor #"<<i+1<<": ";cin>>NUME[i];

        if (NUME[i] > MAY)
        {
            MAY = NUME[i];
        } 
    }
    cout<<"\nEl numero mayor es: "<<MAY<<endl;
    return 0;
}