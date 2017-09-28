/*Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores, ao final deverá ser exibido o resultado da operação. 
Opções disponíveis: 1 – Divisão; 2 – resto da divisão; 3 – adição; 4 – multiplicação.
Obs: Utilizar:  do-while (para o menu) e o comando switch.       
*/

#include <stdio.h>
int main(){

    printf("Entre com a operação desejada!\n\n");
    printf("\n Digite 1 para somar!\n");
    printf("\n Digite 2 para subtrair!\n");
    printf("\n Digite 3 para multiplicar!\n");
    printf("\n Digite 4 para dividir!\n");

    int entrada, numero1, numero2;

    printf("\n\nEntre com um dos numeros de acordo com a operação desejada: \n");
    scanf("%d", &entrada);


    do{

    switch (entrada){

        case 1:{
            printf("\nDigite dois valores para se somar: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\nO valor da soma e igual a: %d\n", numero1 + numero2);
            break;
        }

        case 2:{
            printf("\nEntre com dois valores para se subtrair: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\nO valor da subtração e igual a: %d\n", numero1 - numero2);
            break;
        }

        case 3:{
            printf("\nEntre com dois valores para multiplicar: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\no valor da multiplicação e igual a: %d\n", numero1 * numero2);
            break;
        }

        case 4:{
            printf("\nEntre com dois valores para dividir: \n");
            scanf("%d %d", &numero1, &numero2);
            printf("\nO valor da divisao e igual a: %d\n", numero1/numero2);
            break;
        }
        case 5: {
            entrada = 0;
            break;
        }
    }
}  while (entrada != 0);

}
