/*Realice un programa que calcule la descomposicion en factores primos de un numero entero. 
Por ejemplo: 20 =2*2*5
*/

#include<iostream>

using namespace std;

int main()
{
    int PRO = 1, NUM = 0;
    cout<<"Ingrese un numero: ";cin>>NUM; 
    int aux = NUM;
    for (int i = NUM; i > 1; i--)
    {
        if (NUM%2 == 0)
        {
            PRO *= 2;
            NUM = NUM/2;
            cout<<"2";
        }
        else if (NUM%3 == 0)
        {
            PRO *= 3;
            NUM = NUM/3;
            cout<<"3";
        }
        else if (NUM%5 == 0)
        {
            PRO *= 5;
            NUM = NUM/5;
            cout<<"5";
        }
        else if(NUM%7 == 0)
        {
            PRO *= 7;
            NUM = NUM/7;
            cout<<"7";
        }
        else if(NUM%11 == 0)
        {
            PRO *= 11;
            NUM = NUM/11;
            cout<<"11";
        }
        else if(NUM%17 == 0)
        {
            PRO *= 17;
            NUM = NUM/17;
            cout<<"17";
        }

        if (NUM > 1)
        {
            cout<<" * ";
        }
    }
    
    cout<<" = "<<aux<<endl;
    return 0;
}