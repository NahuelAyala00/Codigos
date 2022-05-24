#include <stdio.h>

int main(){
    float lado, Area;

    printf("Informe o lado do quadrado");
    scanf("%f", &lado);
    if(lado >=0 ){
    Area = lado*lado;

    printf("O dobro da area e %f",Area*2);
    }else{
        printf("Informe um lado positivo!\n");
    }
    return 0;
}