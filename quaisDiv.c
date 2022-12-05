/**
* Arquivo: Divisores dentro do intervalo
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>

int div(int p,int q, int x[]);

int main(void){
    int qtd,i,ref;
    scanf("%d,",&qtd);
    int a[qtd];
    for(i=0;i<qtd;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&ref);
    div(ref,qtd,a);
    return 0;
}

int div(int p,int q,int x[]){
    int j;
    for(j=0;j<q;j++){
        if((p%x[j])==0){
            printf("%d# ",x[j]);
        }
        else{
            printf("%d ",x[j]);
        }
    }
    return 0;
}