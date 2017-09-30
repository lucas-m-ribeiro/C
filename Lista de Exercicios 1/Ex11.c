/*Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.*/

#include <stdio.h>
int main(){

    int numero, a, soma = 0;

    printf("Insira um numero: ");
    scanf("%d", &numero);

    for (a = 0; a <= numero; a++){
        soma = soma + a;
    }
    printf("\nsoma dos primeiros numeros naturais e igual a: %d\n", soma);

return 0;
}