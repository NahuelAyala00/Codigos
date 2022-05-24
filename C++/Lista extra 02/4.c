#include <stdio.h>

int main(){
    int n1;
    float soma = 0;

    printf("Informe um numero:");
    scanf("%i",&n1);

    if(n1 % 2 == 0){
        soma = n1 +1;
        printf("%f e impar", soma);
    }
    else{
        soma = n1 +1;
        printf("%f e par ", soma);
    }


    return 0;
}
