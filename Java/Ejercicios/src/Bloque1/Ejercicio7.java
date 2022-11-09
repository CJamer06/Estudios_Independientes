package Bloque1;

import java.util.Scanner;

public class Ejercicio7 {
    public static void main(String[] args) {
        Scanner Time = new Scanner(System.in);
        int Dias = 0, Semanas = 0, Horas = 0;

        System.out.print("Cantidad de horas a calcular: ");
        int n = Time.nextInt();

        do{
            if(n>168) {
                Semanas++;
                n -= 168;
            }else if(n>=24 && n<168){
                Dias++;
                n-=24;
            } else {
                Horas++;
                n--;
            }
        }while(n != 0);

        System.out.println(Semanas+" Semanas, "+Dias+" Dias y "+Horas+" Horas");
    }
}
