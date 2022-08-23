/*
6.Faça  um  programa  que  peça  as  quatro  notas  de  
10  alunos,  calcule  e  armazene num  vetor  a  média  de
cada  aluno,  imprima  o  número  de  alunos  com  média 
maior ou igual a 7.0
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int n, cont=0,i;
    float v[40], soma=0, MediaDosAlunos[10], notas[40];

    for(i=0;i<10;i++){
        printf("Notas do %i Aluno:\n",i+1);
        for(n=0;n<4;n++){
            printf("Nota %i:",n+1);
            scanf("%f",&v[i]); 
            fflush(stdin);
            if(v[i] < 0 || v[i] > 10){
                printf("Informe uma nota valida!\n");
                n--;
            }
            notas[i]=v[i];
              }
        MediaDosAlunos[i]=notas[i]/4;
    }
    if(MediaDosAlunos[i] >= 7 || MediaDosAlunos[i] <= 10){
        cont++;
    }

    printf("\nO numero de alunos com media >= 7 foi de %i\n",cont);
    for(i=0;i<10;i++){
    printf("%.2f,",MediaDosAlunos[i]);
    }
   

    printf("\n\n");

    return 0;
}