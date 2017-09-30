/*Faça 3 funções:
•	ler: - uma função que receba dois número inteiro positivo n;
•	multiplicar: - que multiplique os números recebidos na função ler;
•	imprimir: - que imprima o resultado da função multiplicar.
*/

#include <stdio.h>

void ler(int num1, int num2){
    printf("Entre com dois numeros: ");
    scanf("%d %d", &num1, &num2);
}

void multiplicar(int num1, int num2){
    int multi = 0;
    multi = num1 * num2;
}

void imprimir(int num1, int num2){
    printf("\nO valor da multiplicação e: %d \n", (multiplicar));

}

int main(void){
    int num1, num2;

    ler(num1, num2);

    multiplicar(num1, num2);

    imprimir(num1, num2);
}