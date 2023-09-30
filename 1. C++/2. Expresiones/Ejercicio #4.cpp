//4. Escribe la siguiente expresión como expresión en C++

#include<iostream>

using namespace std;

int main()
{
    int a = 0, b = 0, c = 0, d = 0;
    float res = 0;

    cout<<"El valor de 'a': ";cin>>a;
    cout<<"El valor de 'b': ";cin>>b;
    cout<<"El valor de 'c': ";cin>>c;
    cout<<"El valor de 'd': ";cin>>d;

    res = (a+(b/(c-d)));

    cout<<"El resultado ("<<a<<"+("<<b<<"/("<<c<<"-"<<d<<"))) = "<<res<<endl;
    return 0;
}