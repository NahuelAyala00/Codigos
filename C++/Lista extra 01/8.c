#include <stdio.h>

int main(){
    float media, nota1, nota2, nota3, nota4;

    printf("Informe suas notas 4 notas bimestrais:\n");
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    scanf("%f", &nota3);
    scanf("%f", &nota4);

    media = (nota1+nota2+nota3+nota4)/4;

    printf("A sua media foi de %.1f", media);

    return 0;
}