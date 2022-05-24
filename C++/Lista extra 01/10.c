#include <stdio.h>

int main(){
    int dias_trabalhados;
    float salario, salario_total;

    printf("informe o numero de dias trabalhados:\n");
    scanf("%i",&dias_trabalhados);

    salario = 25*dias_trabalhados;
    salario_total = salario - 0.08*salario;

    printf("O salario liquido foi de %.2f", salario_total);


    return 0;
}