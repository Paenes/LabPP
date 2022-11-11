/**
* Arquivo: Sequência fibonacci
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int fibo(int a,char l2){
    int b,c,e = 0;
    int d = 1;
    for(b = 0;b<(a-1);b++)
        e = c + d;
        c = d;
        d = e;
        l2[b] = 
    return e;
}

char lista(int n){
    char l1[n];
    l1[n] = "..."
    return l1;
}

int main(void){
    printf("Digite o termo desejado para a sequência fibonacci:");
    scanf("%d ", &i);
    printf("%d, ", fibo(i,lista(i)));
    return 0;
}