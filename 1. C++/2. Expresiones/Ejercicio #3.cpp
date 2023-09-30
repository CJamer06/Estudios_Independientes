//3. Escribe la siguiente expresion en C++.

#include <iostream>

using namespace std;

int main()
{
    float a = 0, b = 0, c = 0, d = 0, e = 0, f = 0; 
    float res = 0;
    cout<<"Ingrese el valor de 'a': ";cin>>a;
    cout<<"Ingrese el valor de 'b': ";cin>>b;
    cout<<"Ingrese el valor de 'c': ";cin>>c;
    cout<<"Ingrese el valor de 'd': ";cin>>d;
    cout<<"Ingrese el valor de 'e': ";cin>>e;
    cout<<"Ingrese el valor de 'f': ";cin>>f;

    res = (a+(b/c))/(d+(e/f));

    cout<<"\nEl resultado de ("<<a<<"+("<<b<<"/"<<c<<"))"<<"/("<<d<<"+("<<e<<"/"<<f<<")) = "<<res<<endl; 
    return 0;
}