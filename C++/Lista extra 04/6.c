/*
6.Faça  um  programa  que  peça  as  quatro  notas  de  
10  alunos,  calcule  e  armazene num  vetor  a  média  de
cada  aluno,  imprima  o  número  de  alunos  com  média 
maior ou igual a 7.0
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a, n, cont=0;
    float v[40], notas;

    for(a=0;a<10;a++){
        printf("Notas do %i Aluno:\n",a+1);
        for(n=0;n<4;n++){
            printf("Informe sua %i nota:",n+1);
            scanf("%f",&notas); 
            fflush(stdin);
            if(notas >= 0 && notas <= 10){
                v[i]=notas;
            }if (notas >= 7 && notas <=10){
                cont++;
            }    
              }
    }

    printf("A");

    return 0;
}