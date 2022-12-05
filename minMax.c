/**
* Arquivo: Mínimo e máximo de um intervalo
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>

int minmax(int x[],int tam);

int main(void){
    int qtd,i;
    scanf("%d,",&qtd);
    int a[qtd];
    for(i=0;i<qtd;i++){
        scanf("%d",&a[i]);
    }
    minmax(a,i);
    return 0;
}
int minmax(int x[],int tam){
    int maior = x[0],menor = x[0],j,k;
    for(j=0;j<tam;j++){
        if(x[j]>maior){
            maior = x[j];
        }
        if(x[j]<menor){
            menor = x[j];
        }
    }
    for(k=0;k<tam;k++){
        if(x[k]==maior){
            printf("%d> ",maior);
        }
        else if(x[k]==menor){
            printf("%d< ",menor);
        }
        else{
            printf("%d ", x[k]);
        }
    }
    return 0;
}