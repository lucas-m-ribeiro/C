/*Dados um inteiro x e um inteiro não-negativo n, calcular x n. */

#include <stdio.h>
#include <math.h>

int main(){
int n, x, mult;
printf("Insira um numero: ");
scanf ("%d", &n);

printf("\nInsira um valor para o expoente do numero: ");
scanf("%d", &x);

mult = pow(n,x);

printf ("\nvalor de %d elevado ao expoente %d e: %d\n", n, x, mult);
return 0;
}
