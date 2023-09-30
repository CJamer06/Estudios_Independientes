/*Ejercicio 10: Escriba una función nombrada calc_años() que tenga un parámetro entero que represente 
el número total de días desde la fecha 1/1/2000 y parámetros de referencia nombrados año, mes y día. 
La función es calcular el año, mes y día actual para el número dado de días que se le transmitan. 
Usando las referencias, la función deberá alterar en forma directa los argumentos respectivos en la 
función que llama. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.
*/

#include<iostream>

using namespace std;

void calc_an_os(int TotDias, int& an_o, int& mes, int& dia);

int main()
{
    int TotDias, an_o = 0,mes = 0,dia = 0;

    cout<<"Ingrese un numero de dias: ";cin>>TotDias;
    calc_an_os(TotDias, an_o, mes, dia);

    cout<<"Fecha: "<<1+dia<<"/"<<1+mes<<"/"<<2000+an_o<<endl;
    system("pause");
    return 0;
}

void calc_an_os(int TotDias, int& an_o, int& mes, int& dia)
{
    dia = TotDias;
    do
    {
        if (dia >= 365)
        {
            dia -= 365;
            an_o++;
        }
        else if (dia >= 30)
        {
            dia -= 365;
            an_o++;
        }
        else
        {
            break;
        }
    } while (dia != 0);
    
}