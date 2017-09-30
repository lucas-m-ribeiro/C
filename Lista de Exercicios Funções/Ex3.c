/*Faça uma função que receba, por parâmetro, um valor inteiro e positivo e retorna o número de divisores desse valor.*/

#include <stdio.h>

int divisores (int numero){
    int cont = 0, x = 1;

    for (x; x <= numero; x++){
    if (!(numero%x)){
      cont++;
      printf("\n%d eh divisivel por %d\n", x, numero);
    }
  }
}

int main(){

    int numero;

    printf("Entre com um numero: ");
    scanf("%d", &numero);

    divisores(numero);

    return 0;
}