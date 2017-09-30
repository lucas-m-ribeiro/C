/*. Leia um vetor de 8 posições e troque os 4 primeiros valores pelos 4 últimos e vice e versa. Escreva ao final o vetor obtido.*/

#include<stdio.h>

int main(){

  int vetor[8], k;

  for(k=0 ; k<8 ; k++){
    printf("Entre com 8 numeros: ");
    scanf ("%d", & vetor[k]);
  }

  printf("\n\n\t VETOR INVERTIDO!!!\n\n");

  for(k=4 ; k<8 ; k++){
    printf("%d\n", vetor[k]);
  }

  for(k=0 ; k<4 ; k++){
    printf("%d\n", vetor[k]);
  }

}