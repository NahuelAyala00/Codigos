#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1, soma = 0;

    printf("informe um numero:");
    scanf("%i", &n1);
    fflush(stdin);

    if(n1%2 == 0){
        soma = n1 +1;
        printf("%i e impar", soma);
    }
    else{
        soma = n1 -1;
        printf("%i e par", soma);
    }

    return 0;
}