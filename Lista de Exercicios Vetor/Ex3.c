/*. Inicialize um vetor de 10 posições e em seguida leia um valor X qualquer. 
Seu programa devera fazer uma busca do valor de X no vetor lido e informar a posição em que foi encontrado ou se não foi encontrado.
     Exemplo: int vetor[10] = {2,5,4,54,43,22,5,9,30,15}; */

#include <stdio.h>

int main(){

  int vetor[10], numero, k;

  for(k = 0; k <10; k++){
    printf("posicao vetor %d  / Entre com 10 numeros: ", k);
    scanf("%d", &vetor[k]);
  }

  printf("\n\nVerifique um valor!\n\n");

  printf("Entre com um numero; ");
  scanf("%d", &numero);

  for(k = 0; k < 10; k++){

    if (vetor[k] == numero){
      printf("\nposicao %d = numero %d\n", k, numero);
  }
    else{
      printf("\nNao encontrado!");
    }
  }

return 0;

}