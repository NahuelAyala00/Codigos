/*
11.É  dada  uma  lista  contendo  datas  de  nascimento  
(somente  o  ano)  de  diversas pessoas.  Faça  um  programa  
para  determinar  a  idade  de  cada  pessoa  e    a  idade média do 
grupo.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int pessoas, i, AnoAtual, idade, soma=0;

    printf("Informe o ano atual:");
    scanf("%i",&AnoAtual);
    fflush(stdin);

    printf("Informe a quantidade de pessoas:");
    scanf("%i", &pessoas);
    fflush(stdin);

    int anos[pessoas], IdadeDasPessoas[pessoas];
    for(i=0;i<pessoas;i++){
        printf("Informe o ano de nascimento da %i pessoa:",i+1);
        scanf("%i",&anos[i]);
        fflush(stdin);
        if(anos[i] < 1900 || anos[i] > AnoAtual){
            printf("Informe uma ano valido! \n");
            i--;
        }
        else{
        idade=AnoAtual-anos[i];
        }
    }

    for(i=0;i<pessoas;i++){
    IdadeDasPessoas[i]=AnoAtual-anos[i];
    soma+=IdadeDasPessoas[i];
    }
    
    float MediaDasIdades;
    MediaDasIdades=soma/pessoas;


    printf("\nA idades das pessoas:");
    for(i=0;i<pessoas;i++){
        printf("%i,",IdadeDasPessoas[i]);
    }
    printf("\nMedia das idades do grupo:%.2f",MediaDasIdades);
 

    printf("\n\n");

    return 0;
}