/*Dado dois vetores, A (5 elementos) e B (8 elementos), faça um programa em C que imprima todos os elementos comuns aos dois vetores.
  Exemplo: int A[5] = {1,2,4,6,21};
 int B[8] = {2,3,6,7,9,11,15,20};
 */
 
#include <stdio.h>

int main(){

  int vetor1[5], vetor2[8], i, k;

  for(i = 0; i < 5; i++){
    printf("Valores do vetor 1: ");
    scanf("%d", &vetor1[i]);
  }

  for(k = 0; k < 8; k++){
    printf("\n Valorees do vetor 2: ");
    scanf("%d", &vetor2[k]);
  }

  for(i = 0; i < 5; i++){
    for(k = 0; k < 8; k++)
    if (vetor1[i] == vetor2[k]){
      printf("\n numeros em comum: %d", vetor1[i]);
    }
  }
  return 0;
}