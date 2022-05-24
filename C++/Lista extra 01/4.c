#include <stdio.h>

int main(){
    float metros, centimetros;

    printf("informe o valor em metros:\n");
    scanf("%f",&metros);  

    if(metros >= 0){
    centimetros = 100*metros;

    printf("O valor foi de %.2fcm ",centimetros);
    }else{
        printf("Informe um numero valido!\n");
    }
    return 0;
}