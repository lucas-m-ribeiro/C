/*Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é par e 0 se n é impar. */

#include <stdio.h>

void parImpar();

int main(void){
    int numero, sum=1;

    printf("pressione 0 para sair do programa\n\n");

    while(sum != 0){
    printf("Digite o numero: \n");
    scanf("%d", &numero);

    if (numero == 0 )
        sum = 0;
        break;

    parImpar(numero);
    }
}

void parImpar(int numero){
    if(numero % 2 == 0)
        printf("E par\n");
    else
        printf("E impar\n");
}