/**
* Arquivo: Somatório dos números dados
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>

void sominha(int x,float y[]);

int main(void){
    int qtd,i;
    scanf("%d",&qtd);
    float a[qtd];
    for(i=0;i<qtd;i++){
        scanf("%f",&a[i]);
    }
    sominha(qtd,a);
    return 0;
}

void sominha(int x,float y[]){
    float soma=0;
    int j;
    for(j=0;j<(x-1);j++){
        printf("%g + ",y[j]);
        soma += y[j];
    }
    soma += y[x-1];
    printf("%g = ",y[x-1]);
    printf("%g",soma);
}