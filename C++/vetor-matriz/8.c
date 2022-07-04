/*
8. Construa um algoritmo que leia uma matriz
quadrada de ordem 3. Leia uma
constante K, diminui a diagonal principal por
esta constante e imprima a matriz
diminuida.
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a[3][3],i,j,k;

    printf("\nDados da matriz A: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Informe A[%i][%i]: ",i+1,j+1);
            scanf("%i", &a[i][j]);
            fflush(stdin);
        }
    }

    printf("\nDigite o valor de K:");
    scanf("%i",&k);
    fflush(stdin);

    for(i=0;i<3;i++){
        a[i][i]-=k;
    }

    printf("\nA matriz resultate foi de: \n\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%i\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}