#include <stdio.h>

/*Faça um programa que peça dois números inteiros e gere
 os números inteiros que estão no intervalo entre eles
*/
int main(){
    int n1, n2, i = 0;

    printf("Infomre o valor de um numero: ");
    scanf("%i",&n1);
    printf("Infomre o valor de outro numero: ");
    scanf("%i",&n2);
    if(n2>n1){
    for(i=n1+1;i<=n2-1;i++){
        printf("%i,",i);
    }} 
    else{
        for(i=n2;i<=n1;i++){
        printf("%i,",i);
    }}



    return 0;
}