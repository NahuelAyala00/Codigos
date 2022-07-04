/*
7. Construa um algoritmo que leia duas 
matrizes 5x5 e gere uma terceira matriz
com a subtração dos elementos correspondentes 
de a e b
*/

#include <stdio.h>
#include <stdlib.h>

int main (){
    int a[5][5],b[5][5],c[5][5],i,j;

    printf("\nDados da matriz A: \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite A[%i][%i]",i+1,j+1);
            scanf("%i",&a[i][j]);
        }
    }

        printf("\nDados da matriz B: \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("Digite B[%i][%i]",i+1,j+1);
            scanf("%i",&b[i][j]);
        }
    }

    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            c[i][j]=a[i][j]*b[i][j];
        }
    }
    
    printf("\nA subtracao resultante da matriz A - B e: \n\n");
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            printf("%i\t",c[i][j]);
        }
        printf("\n\n");
    }

    return 0;
}