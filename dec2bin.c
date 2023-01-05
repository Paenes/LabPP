/**
* Arquivo: Decimal para binário
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

void bimbim(long long unsigned int x);

int main(void){
    long long unsigned int n1;
    scanf("%llu",&n1);
    bimbim(n1);
    return 0;
}

void bimbim(long long unsigned int x){
    int i = 0;
    long long unsigned int bim;
    int *v = (int*) calloc(1,sizeof(int));
    for(bim=x;bim>=1;bim=bim/2){
        v[i] = (bim%2);
        v = realloc(v,(i+2)*sizeof(int));
        i++;
        }
    for(int j=(i-1);j>=0;j--){
        printf("%d",v[j]);
    }
    free(v);
    }   