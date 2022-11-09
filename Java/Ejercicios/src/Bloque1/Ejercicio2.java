package Bloque1;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Ejercicio2 {
    public static void main(String[] args) {
        Scanner e = new Scanner(System.in);
        Scanner h = new Scanner(System.in);

        System.out.print("Digite el valor del salario por hora: $");
        float S = e.nextFloat();

        System.out.print("Numero de horas trabajadas a la semana: ");
        float H = h.nextFloat();

        System.out.print("El total a pagar es: $"+ S*H);

    }
}
