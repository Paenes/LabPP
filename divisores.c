/**
* Arquivo: Divisores de um número inteiro
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <math.h>

int divisores(int m);

int main(void){
    int n1;
    scanf("%d",&n1);
    divisores(n1);

    return 0;
}

int divisores(int m){
    int p;
    for(p = 1;p<m;p++){
        if(m%p==0){
            printf("%d, ",p);
        }
    }
    printf("%d",m);
    return 0;
}