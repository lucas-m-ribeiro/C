/*Dado um número positivo n, imprimir seu quadrado. */

#include <stdio.h>
int main(){

    int num, quadrado;

    printf("insira um numero: ");
    scanf("%d", &num);
    quadrado = num * num;
    printf("\nO numero %d elevado ao quadrado e igual a: %d\n", num, quadrado);

    return 0;
}