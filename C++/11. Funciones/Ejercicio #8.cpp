/*8. Escriba una función nombrada cambio() que tenga un parámetro en número entero y seis parámetros 
de referencia en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. 
La función tiene que considerar el valor entero transmitido como una cantidad en dólares y convertir 
el valor en el número menor de billetes equivalentes.*/

#include<iostream>

using namespace std;

void cambio(int, int&, int&, int&, int&, int&, int&);

int main()
{
    int U = 1, CU = 5, D = 10, DD = 20, CD = 50, C = 100, NUM; 

    cout<<"Monto a retirar: ";cin>>NUM;

    cambio(NUM, U, CU, D, DD, CD, C);

    system("pause");
    return 0;
}

void cambio(int NUM, int& U, int& CU, int& D, int& DD, int& CD, int& C)
{
    int C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, C6 = 0;

    do
    {
        if (NUM >= C)
        {
            C1++;
            NUM = NUM - 100;
        }
        else if (NUM >= CD)
        {
            C2++;
            NUM = NUM - 50;
        }
        else if (NUM >= 10)
        {
            C3++;
            NUM = NUM - 10;
        }
        else if (NUM >= 20)
        {
            C4++;
            NUM = NUM - 2;
        }
        else if (NUM >= 5)
        {
            C5++;
            NUM = NUM - 5;
        }
        else if (NUM >= 1)
        {
            C6++;
            NUM = NUM - 1;   
        }
    }while (NUM != 0);
    
    cout<<" B100: "<<C1<<"\n B50: "<<C2<<"\n B20: "<<C3<<"\n B10: "<<C4<<"\n B5: "<<C5<<"\n B1: "<<C6<<endl;
}