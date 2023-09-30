package Bloque2;

import java.util.Scanner;

public class Ejercicio1 {
    public static void main(String[] args) {
        Scanner Num = new Scanner(System.in);

        System.out.print("Digita un valor: ");
        int Dato = Num.nextInt();

        if(Dato%10 == 0){
            System.out.println("Es multiplo de 10");
        } else {
            System.out.println("No es multiplo de 10");
        }
    }
}
