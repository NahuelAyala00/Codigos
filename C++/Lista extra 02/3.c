#include <stdio.h>

int main(){
    int n1;

    printf("Informe um numero:");
    scanf("%i",&n1);

    if (n1 % 2 == 0){
        printf("%i e par\n",n1);
    }
    else{
        printf("%i e impar\n",n1);
    }

    return 0;
}