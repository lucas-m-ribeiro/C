/*Suponha um vetor N com 10 elementos e outro vetor M com 10 elementos. 
Faça um programa em C que calcule o produto escalar P de A por B. (Isto é, P =A[1]*B[1] + A[2]*B[2] + ... A[N]+B[N]).
Exemplo: int M[10] = {1,2,3,4,5,6,7,8,9,10};
int N[10] = {1,1,1,1,1,1,1,1,1,1};
*/

#include <stdio.h>

int main(){

    int vetorM[10], vetorN[10], cont = 0, i;

    for(i = 0; i < 10; i++){
        printf("Entre com 10 valores: ");
        scanf("%d", &vetorM[i]);
    }

    for(i = 0; i < 10; i++){
        printf("\n");
        printf("Entre com mais 10 valores: ");
        scanf("%d", &vetorN[i]);
    }

    for(i = 0; i < 10; i++){
        cont = vetorM[i] * vetorN[i];
    }

    printf("\nO produto escalar e igual a: %d", cont);

return 0;
}