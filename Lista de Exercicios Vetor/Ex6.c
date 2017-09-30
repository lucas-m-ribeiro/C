/* Durante uma corrida de automóveis com N voltas de duração foram anotados para um piloto, na ordem, os tempos registrados em cada volta. 
Fazer um programa emC para ler os tempos das N voltas, calcular e imprimir:
a. melhor tempo;
b. a volta em que o melhor tempo ocorreu;
c. tempo médio das N voltas;
*/

#include <stdio.h>
#define n 0

int main() {

    int tempo[n], volta, i, media = 0, soma = 0, MelhorVolta = 0, MelhorTempo = 0;
    int x, k;

    printf("Digite o numero de voltas: ");
    scanf("%d", &volta);

    for(i = 1; i <= volta; i++){
        printf("\nDigite o tempo da %d volta: ", i);
        scanf("%d", &tempo[n]);
        soma += tempo[n];
    }
    media = soma/volta;
    printf("\ntempo médio e: %d\n", media);

    x = 0;
    k = tempo[n];

    while (x < n){
        if(tempo[n] < x)
            x = tempo[x];
    }
    x++;
    printf("O melhor tempo e %d", x);
    printf("\nA volta do melhor tempo: %d", i);

    return 0;
}