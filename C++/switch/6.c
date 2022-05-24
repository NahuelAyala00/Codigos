#include <stdio.h>
#include <stdlib.h>

int main(){
    char sexo;
    
    printf("Informe seu sexo, F (feminino) M (masculino)");
    scanf("%c", &sexo);
    fflush(stdin);

    switch (sexo){
    case 'F':
        printf("feminimo");
        break;
    case 'f':
        printf("feminimo");
        break;
     case 'M':
        printf("masculino");
        break;
     case 'm':
        printf("masculino");
        break;
    default:
        printf("sexo invalido");
    }
    return 0;
}