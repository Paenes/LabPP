/**
* Arquivo: Soma de Gauss
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>

int n1;

int main(void){
    printf("Digite um nº maior que 1:");
    scanf("%d", &n1);
    printf("%d",(((n1+1)*n1)/2));
    return 0;
}