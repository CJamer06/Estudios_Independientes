package Bloque2;

import javax.swing.*;

public class Ejercicio5 {
    public static void main(String[] args) {
        int horas = Integer.parseInt(JOptionPane.showInputDialog("Digite el numero de horas trabajadas: "));

        if(horas <= 40){
            JOptionPane.showMessageDialog(null, "El suedo es $"+(horas*16));
        } else {
            int Aux = 40*16 + (horas-40)*20;
            JOptionPane.showMessageDialog(null, "El suedo es $"+Aux);
        }
    }
}
