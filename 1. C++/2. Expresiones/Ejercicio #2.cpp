//2. Escribe la siguiente exprecion matematica como exprecion en C++

#include<iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    float res = 0;

    cout<<"Digite el valor de 'a': ";cin>>a;
    cout<<"Digite el valor de 'b': ";cin>>b;
    cout<<"Digite el valor de 'c': ";cin>>c;
    cout<<"Digite el valor de 'd': ";cin>>d;

    res = (a+b)/(c+d);

    cout<<"\nEl resultado de la operacion ("<<a<<"+"<<b<<")/("<<c<<"+"<<d<<") = "<<res<<endl;
    return 0;
}