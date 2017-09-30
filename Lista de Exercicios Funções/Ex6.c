/*Escreva uma função recursiva que receba, por parâmetro, dois valores X e Z e calcula e retorna XZ. (sem utilizar funções prontas)*/

#include <stdio.h>

    int expoente(int x){
        int i = 1, z, c = 1;

    printf("Entre com um numero: ");
    scanf("%d", &x);

    printf("\nEntre com um expoente para o numero: ");
    scanf("%d", &z);

    for (i; i <= z; i++){
    c *= x;
  }

  printf("\n%d elevado a %d e: %d\n", x, z, c);

}

int main(){

    int x, i = 1, z, c = 1;

    expoente(x);


return 0;
}