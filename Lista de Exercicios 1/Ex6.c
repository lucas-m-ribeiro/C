/*Dados três números, imprimi-los em ordem crescente */

#include<stdio.h>
int main(){
    int num1,num2, num3;

    printf("Entre com 3 numeros: ");
    scanf("%d %d %d", &num1, &num2, &num3);

     if ((num1 < num2) && (num1 < num3)){

        if (num2 < num3)
            printf("\nordem crescente e: %d, %d, %d\n", num1, num2, num3);
        else
            printf("\nordem crescente e: %d, %d, %d\n", num1, num3, num2);
    }

    else if ((num2 < num1) && (num2 < num3)){

        if (num1 < num3)
            printf("\nordem crescente e: %d, %d, %d\n", num2, num1, num3);
        else
            printf("\nordem crescente e: %d, %d, %d\n", num2, num3, num1);
    }

    else if ((num3 < num1) && (num3 < num2)){

        if (num1 < num2)
            printf("\nordem crescente e: %d, %d, %d\n", num3, num1, num2);
        else
            printf("\nordem crescente e: %d, %d, %d\n", num3, num2, num1);
    }
}