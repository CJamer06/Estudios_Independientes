package Bloque1;

import java.sql.SQLOutput;
import java.util.Scanner;

public class Ejercicio5 {
    public static void main(String[] args){
        Scanner Datos = new Scanner(System.in);

        System.out.print("Participacion: ");
        float P = Datos.nextFloat();

        System.out.print("Primer Parcial: ");
        float PEP = Datos.nextFloat();

        System.out.print("Segundo parcial: ");
        float SEP = Datos.nextFloat();

        System.out.print("Examen final: ");
        float EF = Datos.nextFloat();

        float CF = (float) ((P*0.10) + (PEP*0.25) + (SEP*0.25) + (EF*0.40));

        System.out.println("La calificacion final obtenida por el estudiante es: "+CF);
    }
}
