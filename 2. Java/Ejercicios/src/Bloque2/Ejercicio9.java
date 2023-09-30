package Bloque2;

import javax.swing.*;

public class Ejercicio9 {
    public static void main(String[] args) {
        int Dia = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el Día [1-30]: "));
        int Mes = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el Mes [1-12]: "));
        int Año = Integer.parseInt(JOptionPane.showInputDialog("Ingrese el Año: "));

        if (Dia >= 1 && Dia <= 30){
            if (Mes >= 1 && Mes <= 12) {
                if (Año != 0) {
                    JOptionPane.showMessageDialog(null, "La fecha es correcta");
                } else {
                    JOptionPane.showMessageDialog(null, "Error en el Año");
                }
            } else {
                JOptionPane.showMessageDialog(null, "Error en el mes");
            }
        } else {
            JOptionPane.showMessageDialog(null, "Error en el dia");
        }
    }
}
