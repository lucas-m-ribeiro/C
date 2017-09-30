/*Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 10 */

#include <stdio.h>
int main(){

    int numero, i = 0;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    do{
        printf("\n%d x %d = %d\n", numero, i, numero * i);
        i++;
    }while (i <= 10);

return 0;
}