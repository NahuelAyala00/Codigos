#include <stdio.h>

int main(){
    float Area,raio, pi=3.14;
    printf("informe o valor do raio do circulo:\n");
    scanf("%f",&raio);

    Area = pi*raio*raio;

    printf("O valor da Area do cirulo e %f ",Area);
    return 0;
}