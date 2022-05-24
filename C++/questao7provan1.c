#include <stdio.h>

int main(){
    int B = 5;
    int A = 7;

    B=-B+A;             //A)-5+7= 2
    printf("A) %i\n",B);
    A=A*(2-A);          //B)7(2-7); 7.-5 = -35
    B=B-(-B-A);
    printf("B) %i\n",A);
    B=51;               //b=51
    B=A+B;              //C)-35 + 51 = 16
    printf("C) %i\n",B);
    A=1+B;              //a= 17
    A=A*(B-A);          //D)a= 17(16-17); a = 17 . (-1); a= -17    
    printf("D) %i\n",A);

    return 0;

}