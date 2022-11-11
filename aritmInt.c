/**
* Arquivo: AritmInt
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int primeiroInt, segundoInt, soma;

int main(void){
    printf("Digite 2 números:\n");
    scanf("%d %d", &primeiroInt, &segundoInt);
    printf("%d+%d = %d, ", primeiroInt, segundoInt, (primeiroInt+segundoInt));
    printf("%d-%d = %d,\n", primeiroInt, segundoInt, (primeiroInt-segundoInt));
    printf("%d*%d = %d, ", primeiroInt, segundoInt, (primeiroInt*segundoInt));
    printf("%d/%d = %d, ", primeiroInt, segundoInt, (primeiroInt/segundoInt));
    printf("%d%%%d = %d\n", primeiroInt, segundoInt, (primeiroInt%segundoInt));
    return  0;
}