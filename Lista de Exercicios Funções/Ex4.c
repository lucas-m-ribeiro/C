/*. Escreva uma função que recebes 3 valores inteiros e positvos X, Y e Z e que verifique se esses valores 
podem ser os comprimentos dos lados de um triângulo e, neste caso, retornar qual o tipo de triângulo formado. 
Para que X, Y e Z formem um triângulo é necessário que a seguinte propriedade seja satisfeita: 
o comprimento de cada lado de um triângulo é menor do que a soma do comprimento dos outros dois lados. 
O procedimento deve identificar o tipo de triângulo formado observando as seguintes definições:
•	o Triângulo Equilátero: os comprimentos dos 3 lados são iguais.
•	o Triângulo Isósceles: os comprimentos de 2 lados são iguais.
•	o Triângulo Escaleno: os comprimentos dos 3 lados são diferentes.
*/

#include <stdio.h>

int triangulos(num1, num2, num3){

    do{

    printf("Entre com tres numeros equivalentes a um triangulo: ");
    scanf("%d" "%d" "%d", &num1, &num2, &num3);

  }   while (num1 > num2 + num3 || num2 > num1 + num3 || num3 > num1 + num2);

    printf("\n Os valores sao equivalentes a um triangulo\n");

    if (num1 == num2 && num2 == num3)
      printf("\nTriangulo Equilatero\n");

    else if (num1 != num2 && num2 != num3)
      printf("\nTriangulo Escaleno\n");

    else
      printf("\nTriangulo isoceles\n");

}

int main(){
    int num1, num2, num3;
    triangulos(num1, num2, num3);

return 0;
}