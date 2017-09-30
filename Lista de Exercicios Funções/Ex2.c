/*Escreva uma função que leia um inteiro não-negativo n e imprima a soma dos n primeiros números primos.*/

#include <stdio.h>

int somaprimos (int n){

    int a = 1, cont = 0;

    for (a = 1; a <= n; a++){
        if (n % a == 0)
            cont++;
    }
    if (cont == 2)
        return 1;
    else
        return 0;
}

int main(){

    int x, n, k, sum = 0;

    printf("Entre com um numero: ");
    scanf("%d", &n);

    for (x = 0; x <= n; x++){
        k = somaprimos(x);
        if (k == 1)
        {
                printf("%d primo\n", x);
                sum += x;
        }
    }
    printf("\n A soma dos primos e igual a: %d\n", sum);
}