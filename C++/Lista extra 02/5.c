#include <stdio.h>

int main(){
    float n1;
    int aux;

    printf("Informe um numero:");
    scanf("%f", &n1);

    aux = n1;

    if(aux == n1){
        printf("%f e inteiro\n",n1);
    }
    else{
        printf("%f e real\n ",n1);
    }

    return 0;
}