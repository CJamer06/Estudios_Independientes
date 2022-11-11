package Bloque2;

import javax.swing.*;

public class Ejercicio8 {
    public static void main(String[] args) {
        int Dato = Integer.parseInt(JOptionPane.showInputDialog("Digite un valor entre 1 - 99999: "));

        if(Dato >= 1 && Dato <10){
            JOptionPane.showMessageDialog(null, "Tiene 1 cifra");
        } else if (Dato >= 10 && Dato < 100) {
            JOptionPane.showMessageDialog(null, "Tiene 2 cifra");
        } else if (Dato >= 100 && Dato < 1000){
            JOptionPane.showMessageDialog(null, "Tiene 3 cifra");
        } else if (Dato >= 1000 && Dato < 10000){
            JOptionPane.showMessageDialog(null, "Tiene 4 cifra");
        } else if (Dato >= 10000 && Dato < 100000){
            JOptionPane.showMessageDialog(null, "Tiene 5 cifra");
        }

    }
}
