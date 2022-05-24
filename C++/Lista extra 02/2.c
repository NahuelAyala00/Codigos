#include <stdio.h>

int main (){
    float n1;

    printf("Informe um numero:\n");
    scanf("%f",&n1);

    if(n1>0){
        printf("%f e positivo\n", n1);
    }
    if(n1<0){
        printf("%f e negativo\n", n1);
    }

    return 0;
}