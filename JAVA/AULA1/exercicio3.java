package Exercicios.JAVA.AULA1;
import java.util.Scanner;
/*
3) Crie um programa que exiba a tabuada de um número informado pelo usuário;
*/
public class exercicio3 {
    
    public static void main(String [] args){
        int i;
        int soma;
        int valor;

        System.out.println("Informe um numero para exibir sua tabuada");
        Scanner ler = new Scanner(System.in);
        valor = ler.nextInt();

        System.out.println("Tabuada do " + valor);
        for(i=1; i<=10; i++){
            soma = valor*i;
            System.out.println(valor + " x " + i + " = " + soma);
        }
    }
}
