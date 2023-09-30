package Bloque2;

import javax.swing.*;

public class Ejercicio3 {
    public static void main(String[] args) {
        char C = JOptionPane.showInputDialog("Digite una letra: ").charAt(0);

        if(Character.isUpperCase(C)){
            JOptionPane.showMessageDialog(null, "Es una letra mayuscula");
        } else {
            JOptionPane.showMessageDialog(null, "No es una letra mayuscula");
        }
    }
}
