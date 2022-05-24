#include <stdio.h>

int main(){
    float n1,n2;

    printf("Informe dois numeros:\n");
    scanf("%f",&n1);
    scanf("%f",&n2);

    if(n1>n2){
        printf("%f e maior que %f", n1,n2);    
    }
    if(n2>n1){
        printf("%f e maior que %f", n2,n1);    
    }   
    if(n2==n1){
        printf("%f = %f", n1,n2);    
    }

    return 0;
}