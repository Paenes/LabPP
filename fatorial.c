/**
* Arquivo: Fatorial
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 03/11/2022
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h>


int64_t fatorial(int64_t x){
    if(x==0){
        return 1;
    }
    else{
        return x*fatorial((x-1));
    }
}

int main(void){
    int n1;
    printf("Digite um número:");
    scanf("%d", &n1);
    printf("%d! = %" PRId64 "\n", n1, (fatorial((int64_t)n1)));
    return 0;
}