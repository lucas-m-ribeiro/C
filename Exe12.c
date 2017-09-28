/*Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.*/

#include <stdio.h>
int main(){
    int numero, a;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    for (a = 0; a < numero; a++)
    printf("%d\n", (a * 2) + 1);
    return 0;
}
