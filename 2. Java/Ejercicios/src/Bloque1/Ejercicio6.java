package Bloque1;

import java.util.Scanner;

public class Ejercicio6 {
    public static void main(String[] agrs){
        Scanner Datos = new Scanner(System.in);

        System.out.print("a = ");
        int a = Datos.nextInt();

        System.out.print("b = ");
        int b = Datos.nextInt();

        int SC = (int) (Math.pow(a, 2) + Math.pow(b, 2) +(2*a*b));
        System.out.print("El cuadrado de la suma de (a+b) es: "+ SC);
    }
}
