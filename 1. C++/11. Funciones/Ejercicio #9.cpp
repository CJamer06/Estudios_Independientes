/*9. Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y 
tres parámetros de referencia enteros nombrados horas, min y seg. La función es convertir el número de
segundos transmitido en un número equivalente de horas, minutos y segundos.*/

#include<iostream>

using namespace std;

void tiempo(int totalSeg, int& horas, int& min, int& seg);

int main()
{
    int totalSeg, horas = 0, min = 0, seg = 0;
    cout<<"Ingrese un numero de segundos: ",cin>>totalSeg;

    tiempo(totalSeg,horas, min, seg);

    cout<<"El tiempo (H:M:S): "<<horas<<":"<<min<<":"<<seg<<endl;
    system("pause");
    return 0;
}

void tiempo(int totalSeg, int& horas, int& min, int& seg)
{
    seg = totalSeg;
    do
    {
        if (seg >= 60)
        {
            seg -= 60;
            min++;
        }
        else
        {
            break;
        }

        if (min >= 60)
        {
            min -= 60;
            horas++;
        }
    } while (seg != 0);
}