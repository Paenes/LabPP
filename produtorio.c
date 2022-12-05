/**
* Arquivo: Produto dos números dados
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>

void produtinho(int x,float y[]);

int main(void){
    int qtd,i;
    scanf("%d",&qtd);
    float a[qtd];
    for(i=0;i<qtd;i++){
        scanf("%f",&a[i]);
    }
    produtinho(qtd,a);
    return 0;
}

void produtinho(int x,float y[]){
    float produto=1;
    int j;
    for(j=0;j<(x-1);j++){
        printf("%g * ",y[j]);
        produto *= y[j];
    }
    produto *= y[x-1];
    printf("%g = ",y[x-1]);
    printf("%g",produto);
}