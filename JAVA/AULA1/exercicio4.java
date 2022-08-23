package Exercicios.JAVA.AULA1;
import java.util.Scanner;
/*
4) Crie um programa que troque os valores que estão armazenados nas variáveis nome1 e nome2.
• A variável nome1 armazenara o valor “mestre do universo”.
• A variável nome2 receberá um valor informado pelo usuário.
• Altere os valores das variáveis e exiba a soma da variável nome1 com o valor da variável nome2
 */
public class exercicio4 {
    public static void main(String [] args){
        String nome1 = "mestre do universo";
        String nome2;

        System.out.println("Informe um valor:");
        Scanner ler = new Scanner(System.in);
        nome2 = ler.next();
        
        System.out.println(nome1 + " + " + nome2);

    } 
}
