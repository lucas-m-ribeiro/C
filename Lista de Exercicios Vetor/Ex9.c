/*Leia um vetor de 10 posições e armazene nele apenas numeros pares */

#include<stdio.h>
int main(){
    int vetor[10], i, cont;

    for(i = 0; i < 10; i++){
        printf("Entre com 10 valores: ");
        scanf("%d", &vetor[i]);
    }

    for(i = 0; i < 10; i++){
        if(vetor[i] % 2 == 0){
            cont++;
           cont = vetor[i];
    printf("\nOs numeros pares do vetor e igual a: %d\n", cont);
    }
}
printf("\n");
system("pause");

}
