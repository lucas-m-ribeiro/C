/*Dado um número inteiro positivo n verificar se é par ou ímpar. 
Apresente uma mensagem na tela informando o número e o resultado. OBS:% utilizado para calcular o resto. */

#include <stdio.h>
int main(){
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        printf("\nnumero %d e par.\n", numero);
    else
        printf("\nnumero %d e impar.\n", numero);

return 0;
}