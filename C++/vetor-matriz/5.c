/*
5. Construa um algoritmo que leia um vetor
de 15 palavras e mostre-os na ordem
inversa.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){

char v[50][15];
int i;

for(i=0;i<15;i++){
    printf("Digite o %i palavra: ",i+1);
    gets(v[i]);
    fflush(stdin);
}
printf("As palavras foram essas: ");
for(i=14;i>0;i--){
    printf("%s, ",v[i]);
}

    return 0;
}