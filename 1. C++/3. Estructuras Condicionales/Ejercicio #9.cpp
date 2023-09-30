/*9. Cambiar un numero entero con el mismo valor pero en romanos

M = 1000
D = 500
C = 100
L = 50
X = 10
V = 5
I = 1
*/

#include<iostream>

using namespace std;

int main()
{
    int numero, unidades, decenas, centenas, mil;

    cout<<"Ingrese un  valor: ";cin>>numero;

    unidades = numero%10; numero/=10;
    decenas = numero%10; numero/=10;
    centenas = numero%10; numero/=10;
    mil = numero%10; numero/=10;

    cout<<"El numero es: ";

    switch (mil)
    {
    case 1:
        cout<<"M";break;
        break;
    case 2:
        cout<<"MM";break;
        break;
    case 3:
        cout<<"MMM";break;
        break;
    }

    switch (centenas)
    {
    case 1:
        cout<<"C";break;
        break;
    case 2:
        cout<<"CC";break;
        break;
    case 3:
        cout<<"CCC";break;
        break;
    case 4:
        cout<<"CD";break;
        break;
    case 5:
        cout<<"D";break;
        break;
    case 6:
        cout<<"DC";break;
        break;
    case 7:
        cout<<"DCC";break;
        break;
    case 8:
        cout<<"DCCC";break;
        break;
    case 9:
        cout<<"CM";break;
        break;
    }

    switch (decenas)
    {
    case 1:
        cout<<"X";break;
        break;
    case 2:
        cout<<"XX";break;
        break;
    case 3:
        cout<<"XXX";break;
        break;
    case 4:
        cout<<"XL";break;
        break;
    case 5:
        cout<<"L";break;
        break;
    case 6:
        cout<<"LX";break;
        break;
    case 7:
        cout<<"LXX";break;
        break;
    case 8:
        cout<<"LXXX";break;
        break;
    case 9:
        cout<<"XC";break;
        break;
    }

    switch (unidades)
    {
    case 1:
        cout<<"I";break;
        break;
    case 2:
        cout<<"II";break;
        break;
    case 3:
        cout<<"III";break;
        break;
    case 4:
        cout<<"IV";break;
        break;
    case 5:
        cout<<"V";break;
        break;
    case 6:
        cout<<"VI";break;
        break;
    case 7:
        cout<<"VII";break;
        break;
    case 8:
        cout<<"VIII";break;
        break;
    case 9:
        cout<<"IX";break;
        break;
    }
    return 0;
}