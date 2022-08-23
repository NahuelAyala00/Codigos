package Exercicios.JAVA.AULA1;
import java.util.Scanner;
/*
5) Crie um programa que calcule a média de um aluno para a matéria de matemática. O aluno deve informar seu nome e as
quatro notas da matéria;
 */
public class exercicio5 {
    public static void main(String [] args){

        Scanner ler = new Scanner(System.in);

        String nome;
        System.out.print("Informe seu nome: ");
        nome = ler.next();

        System.out.println("Informe suas notas de matematica:");
        float soma = 0;
    
        for(int i=1;i<=4;i++){
            System.out.print("Informe sua "+i+" nota: ");
             float notas = ler.nextFloat();
             if(notas < 0 || notas > 10){
                System.out.println("Nota invalida, tente novamente! ");
                i--;
             }
             else{
             soma = soma + notas;
             }
        }
        float media = soma/4;
        System.out.println("Media do "+nome+" foi de "+media);
    }
}
