/*Dada uma sequência de números inteiros não-nulos, começando por 1, imprimir seus quadrados */

#include <stdio.h>
int main(){

    int num1, num2, num3, num4, num5;

    printf("Calculo dos quadrados de uma sequencia de numeros\n\n");

    printf("\n\n Entre com uma sequencia de 5 numeros: ");
    scanf("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

    printf("\nO quadrado de %d e igual a %d: \n", num1, num1 * num1);
    printf("\nO quadrado de %d e igual a %d: \n", num2, num2 * num2);
    printf("\nO quadrado de %d e igual a %d: \n", num3, num3 * num3);
    printf("\nO quadrado de %d e igual a %d: \n", num4, num4 * num4);
    printf("\nO quadrado de %d e igual a %d: \n", num5, num5 *num5);

    return 0;
}
