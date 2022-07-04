/*
Faça um programa que calcule e mostre a média bimestral da turma. O usuário deve informar a quantidade de notas, bem como cada nota.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int alunos, i;
    float notas, soma = 0, media;

    printf("Informe a quantidade de alunos:");
    scanf("%d", &alunos);
    fflush(stdin);

    for(i=1;i<=alunos;i++){
        
        printf("\nNota do %i aluno:",i);
        scanf("%f", &notas);
        fflush(stdin);
        soma+=notas;

    }
    media = (soma)/alunos;

    if(media >= 0 && media <= 10){
    printf("A media da turma foi de %.2f \n", media);
    }
    else{
        printf("Valor de media invalida!\n");
    }

    return 0;
}