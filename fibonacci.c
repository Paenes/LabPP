/**
* Arquivo: Sequência fibonacci
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int fibo(int a, int b,int res, int c, int d){
    for(b=0;b<(a-1);b++){
        printf("%d, ", res);
        res = c + d;
        c = d;
        d = res;
    }
    printf("%d, ... ",res);
    return 0;
}

int main(void){
    int i;
    printf("Digite o termo desejado para a sequência fibonacci:");
    scanf("%d", &i);
    fibo(i,0,0,0,1);
    return 0;
}