/*
9.As  notas  da  disciplina  de  matemática  foram  anotadas  em  
uma  folha.  Faça  um programa  que  leia  esses  dados,  armazene-os 
e  conte  quantos  alunos  possuem nota superior à média da turma.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int alunos, i, cont=0;
    float soma=0, mediadasala;

    printf("Informe a quantidade de alunos:");
    scanf("%i",&alunos);
    fflush(stdin);

    float notas[alunos];
    for(i=0;i<alunos;i++){
        printf("Nota do %i aluno:",i+1);
        scanf("%f",&notas[i]);
        fflush(stdin);
        soma+=notas[i];
    }
    mediadasala= soma/alunos;

    for(i=0;i<alunos;i++){
    if(notas[i]>mediadasala){
        cont++;
    }                                                                                              
    }
    printf("\nO numero de alunos com media maior que a turma foi de %i",cont);
    
    printf("\n\n");
    return 0;
}