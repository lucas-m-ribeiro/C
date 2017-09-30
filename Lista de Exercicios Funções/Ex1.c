/*Escreva uma função que recebe um inteiro positivo n e devolve 1 se n é primo, 0 em caso contrário.*/

#include <stdio.h>
#include <conio.h>

int primo(int numero){

    int i = 1, cont = 0;

    for (i; i <= numero; i++){
        if (numero % i == 0){
            cont++;
        }
    }
    if (cont == 2){
        return 1;
    }

    else{
        return 0;
    }
}
int main () {

    int numero = 0;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    printf("%d\n", primo(numero));

    return 0;
}