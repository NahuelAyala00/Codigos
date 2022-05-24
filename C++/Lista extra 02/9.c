/*Faça um programa que peça três notas de um aluno
 e calcule a média. Analisar a média e imprimir uma das mensagens a seguir:

a. A mensagem "Aprovado", se a média for maior 
ou igual a 7, com a respectiva média alcançada;

b. A mensagem "Reprovado", se a média for menor
 do que 7, com a respectiva média alcançada;

c. A mensagem "Aprovado com Distinção", se a média for igual a 10.
*/

#include <stdio.h>

int main(){
    float n1, n2, n3, media;

    printf("informe suas 3 notas:\n");
    scanf("%f",&n1); scanf("%f",&n2); scanf("%f",&n3); 

    media = (n1+n2+n3)/3; 

    if(media > 0 && media >= 7){
        printf("%f, Aprovado\n", media);
    }
    if(media >= 0 && media < 7){
        printf("%f, Reprovado\n", media);
    }
    else{
        printf("Notas invalidas!\n ");
    }
    return 0;
}