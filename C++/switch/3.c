#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;

    printf("informe um numero:");
    scanf("%i", &n1);

    if (n1%2==0){
        printf("%i e par",n1);
    }
    if (n1%2 != 0){
        printf("%i e impar",n1);
    }

    return 0;
}