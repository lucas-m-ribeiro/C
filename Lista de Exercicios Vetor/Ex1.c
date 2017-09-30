/*Dada uma sequência de n números, imprimi-la na ordem inversa a da leitura. */

#include <stdio.h>
int main(){
    int numeros[10], i, p;

    for(i = 0; i < 10; i++){
        printf("Entre com 10 numeros: ");
        scanf("%d", &numeros[i]);
    }

    for(p = 9; p >= 0; p--){
        printf("\n ordem inversa: %d", numeros[p]);
    }
    return 0;
}