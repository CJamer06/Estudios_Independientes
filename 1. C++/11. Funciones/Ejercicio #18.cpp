/*18. Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par
de fechas que se le transmitan. Por ejemplo, si se transmiten las fechas 10/9/2005 y 11/3/2015 a 
mayor(), será devuelta la segunda fecha.
*/

#include<iostream>

using namespace std;

struct fecha
{
    int dia, mes, an_o;
}f1,f2;

void PD();
int mayor(fecha, fecha);
void mostrar(int);
int main()
{
    int aux;
    PD();
    aux = mayor(f1,f2);
    mostrar(aux);
    return 0;
}

void PD()
{
    cout<<"Fecha #1:\n";
    cout<<"Dia: ";cin>>f1.dia;
    cout<<"Mes: ";cin>>f1.mes;
    cout<<"Año: ";cin>>f1.an_o;

    cout<<"\nFecha #2:\n";
    cout<<"Dia: ";cin>>f2.dia;
    cout<<"Mes: ";cin>>f2.mes;
    cout<<"Año: ";cin>>f2.an_o;
}

int mayor(fecha f1, fecha f2)
{
    if(f1.an_o > f2.an_o)
    {
        return 1;
    }
    else if(f1.an_o < f2.an_o)
    {
        return 2;
    }
    else
    {
        if (f1.mes > f2.mes)
        {
            return 1;   
        }
        else if (f1.mes < f2.mes)
        {
            return 2;
        }
        else
        {
            if (f1.dia > f2.dia)
            {
                return 1;   
            }
            else if (f1.dia < f2.dia)
            {
                return 2;
            }
            else
            {
                return 0;
            }
        }
    }
}

void mostrar(int x)
{
  cout<<"\nLa fecha mayor es: ";
  switch (x)
  {
  case 0:
        cout<<"Las fechas son iguales "<<endl;
      break;

  case 1:
        cout<<f1.dia<<"/"<<f1.mes<<"/"<<f1.an_o<<endl;
      break;

  case 2:
        cout<<f2.dia<<"/"<<f2.mes<<"/"<<f2.an_o<<endl;
      break;

  default:
      break;
  }
}