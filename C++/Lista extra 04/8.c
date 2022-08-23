/*
8.Faça  um  programa  que  peça  a  matricula  de  dez  alunos  e  
armazene  num  vetor. Peça  também  as  quatro  notas  desses 10  
alunos,  calcule  e  armazene  em  outro vetor a média de cada aluno. 
Imprima a matricula de cada aluno seguido de sua média.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int i, matriculas[10], n;
    float notas[40], medias[10];

    for(i=0;i<10;i++){
        printf("Aluno %i, informe o numero de sua matricula: ",i+1);
        scanf("%i",&matriculas[i]);
        fflush(stdin);
        printf("Aluno %i informe suas 4 notas: \n",matriculas[i]);
        for(n=0;n<4;n++){
            printf("Nota %i:",n+1);
            scanf("%f",&notas[i]);
            fflush(stdin);
            if(notas[i] < 0 || notas[i] > 10){
                printf("Informe uma nota valida!\n");
                n--;
            }

        }
        medias[i]=notas[i]/4;
    }

    printf("\nMatriculas: ");
    for(i=0;i<10;i++){
        printf("%i,",matriculas[i]);
    }
    printf("\n");

    printf("\nMedias: ");
    for(i=0;i<10;i++){
        printf("%.2f,",medias[i]);
    }

    printf("\n\n");
    return 0;
}