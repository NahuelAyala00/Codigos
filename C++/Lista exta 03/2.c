/*Faça um programa que peça dois números inteiros e gere os números pares que estão no intervalo entre eles
*/

#include <stdio.h>


int main(){
    int n1, n2, i;

    printf("Informe dois numeros inteiros: \n");
    scanf("%i",&n1); 
    scanf("%i",&n2);
    
    if(n2>n1){
    for(i=n1;i<=n2;i++){
        if(i%2 == 0){
        printf("%i,", i);
    }}}
    else{
        for(i=n2;i<=n1;i++){
        if(i%2 == 0){
        printf("%i,", i);
    }}}


    return 0;
}