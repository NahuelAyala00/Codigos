#include <stdio.h>
#include <stdlib.h>

int main(){
    char sexo;

    printf("Informe seu seox: F (feminimo) M (masculino)\n");
    scanf("%c",&sexo);

    switch (sexo)
    {
    case 'f':
    case 'F':
        printf("Feminimo\n");
        break;
    case 'm':
    case 'M':
        printf("Masculino\n");
        break;
    default:
    printf("Sexo invalido!\n");
        break;
    }

    return 0;
}