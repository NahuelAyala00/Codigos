package Exercicios.JAVA.AULA1;
import java.util.Scanner;
/*
6) Escreva um programa que, com base em uma temperatura em graus celsius, a converta e exiba em Kelvin (K), Réaumur(Re), 
Rankine (Ra) e Fahrenheit (F), seguindo as fórmulas: F = C * 1.8 + 32; K = C + 273.15; Re = C * 0.8;
Ra = C * 1.8 + 32 + 459.67
 */
public class exercicio6 {
    public static void main(String [] aStrings){
        Scanner ler = new Scanner(System.in);

        System.out.println("Temperatura em celsius: ");
        float Celsius = ler.nextFloat();

        float Kelvin = Celsius + 273.15f;
        float Reaumur = Celsius * 0.8f;
        float Rankine = Celsius * 1.8f + 32f + 459.67f;
        float Fahrenheit = Celsius * 1.8f + 32f;

        System.out.println("Temperaturas convertidas: ");
        System.out.println("em Kelvin: "+Kelvin+" K");
        System.out.println("em Reaumur: "+Reaumur+" Re");
        System.out.println("em Rankine: "+Rankine+" Ra");
        System.out.println("em Fahrenheit: "+Fahrenheit+" F");
    }
}
