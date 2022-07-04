/*
Faça um programa que calcule o número médio de alunos por turma.
Para isto, peça a quantidade de turmas e a quantidade de alunos para cada turma.
As turmas não podem ter mais de 40 alunos.
*/

#include <stdio.h>
#include <stdlib.h>

int main(){
    int alunos, turmas, i=1;
    float soma = 0, media;

    printf("Informe a quantidade de turmas:");
    scanf("%i", &turmas);

    
    while(i<=turmas){
        printf("Informe a quantidade de alunos da %i turma:",i);
        scanf("%i", &alunos);
        soma+=alunos;
        i++;
    }
    
 
    media = (soma)/turmas;

    printf("A media de alunos por turmas %f", media);
        



    return 0;
}

