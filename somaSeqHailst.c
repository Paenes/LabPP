/**
* Arquivo: Soma dos números da sequência de Hailst
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>

int seqHailst(int x);

int main(void){
    int y;
    scanf("%d", &y);
    printf("%d", seqHailst(y));
    return 0;
}

int seqHailst(int x){
    if(x==1){
        return 1;
    }
    else{
        if(x%2==0){
            x+=seqHailst((x/2));
        }
        else{
            x+=seqHailst((3*x)+1);
        }
    }
    return x;
}