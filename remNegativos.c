/**
* Arquivo: Removedor des números negativos
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>

int main(void){
    int qtd,positivo=0;
    scanf("%d",&qtd);
    int a[qtd],b[qtd];
    for(int i=0;i<qtd;i++){
        scanf("%d",&a[i]);
    }
    int q=0;
    for(int j=0;j<qtd;j++){
        if(a[j]>0){
            if(q==0){
                printf("%d",a[j]);
                q++;
            }
            else{
                printf(", %d",a[j]);
            }
        }
    }
    if(q==0){
        printf("vazio");
    }
    return 0;
}