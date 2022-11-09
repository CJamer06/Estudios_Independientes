/*3. realice un programa que le a un valor entero y determine si se trara de un número par o impar*/

#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout<<"Digite un valor: ";cin>>num;

    if(num%2 == 0)
    {
        cout<<"El numero es par"<<endl;
    }
    else
    {
        cout<<"El numero es impar"<<endl;
    }

    return 0;
}