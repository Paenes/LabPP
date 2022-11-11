/**
* Arquivo: Soma dos divisores de um nº
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int soma(int a){
    int x = 1;
    int resultado = 0;
    for(x = 1;x<=a;x++){
        if((a%x)==0){
            resultado += x;
        }
    }
    return resultado;
}
int main(void){
    int i;
    printf("Digite um nº inteiro positivo:\n");
    scanf("%d",&i);
    printf("%d", soma(i));
    return 0;
}