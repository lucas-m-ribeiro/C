/*Leia um vetor de 10 posições e elimine as posições com valor zero avançando uma posição, com os valores subsequentes do vetor. 
Dessa forma todos “zeros” devem ficar para as posições finais do vetor. */

#include <stdio.h>
int main(){
    int vetor[10], i, j, k, aux;

    for(i = 0; i < 10; i++){
        printf("Entre com 10 valores: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10 - 1; i++){
        if(vetor[i] == 0){
            j = i;

            do{
                if(j < 10 - 1)
                    k = j + 1;

                aux = vetor[j];
                vetor[j] = vetor[k];
                vetor[k] = aux;
                j++;
                k++;
            }while(vetor[j] < 10 - 1);
        }
    }
    printf("Saida igual a: ");
    for(i = 0; i < 10; i++){
        printf("\n%d\n", vetor[i]);
    }
    return 0;
}
