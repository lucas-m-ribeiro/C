/*Calcular o fatorial de um número fornecido pelo usuário.
    A função fatorial de um número natural n é o produto de todos os n primeiros números naturais.
    Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1. */
	
#include <stdio.h>

int fatorial(int n){

    if (n == 1)
        return n;
    return fatorial (n-1) * n;

}
int main(){
    int n;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    printf("\nO fatrial de %d e igual a: %d\n", n, fatorial(n-1) * n);

    return 0;
}
