/*
10.Foram  anotadas  as  idades  e  alturas  de  30  alunos.  Faça  um
programa  que determine quantos alunos com mais de 13 anos possuem 
altura inferior à média de altura desses alunos.
*/
#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, alturas[30], idades[30], cont=0, soma=0;
    float mediadealturas;

     for(i=0;i<30;i++){
        printf("Informe a altura e a idade do %i aluno: \n",i+1);

        printf("Altura (em cm): ");
        scanf("%i",&alturas[i]);
        fflush(stdin);

        soma+=alturas[i];

        printf("Idade: ");
        scanf("%i",&idades[i]);
        fflush(stdin);
     }
     mediadealturas = soma/30;

    for(i=0;i<30;i++){
     if(idades[i] > 13){
        if(alturas[i] < mediadealturas){
            cont++;
        }
     }
    }

    printf("\n A quantidade de alunos com mais de 13 anos e altura menor que a media da turma foi de %i",cont);

    printf("\n\n");

    return 0;
}