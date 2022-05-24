#include <stdio.h>

int main(){
    int horas_trabalhadas;
    float reais_por_hora, salario;

    printf("Informe a quantidade de horas trabalhadas:\n");
    scanf("%d",&horas_trabalhadas);

    printf("Informe o ganho por hora:\n");
    scanf("%f", &reais_por_hora);

    salario = reais_por_hora*horas_trabalhadas;

    printf("Seu salario foi de %.2f", salario);

    return 0;
}