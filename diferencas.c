/**
* Arquivo: Diferença entre os elementos adjacentes
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 01/12/2022
*/

#include <stdio.h>

void preencher(float dif[], float lista[], int tam1);
float min(float minimo[], int tam2);
float max(float maximo[], int tam3);

int main(void){
    int qtd;
    scanf("%d",&qtd);
    float a[qtd],b[(qtd-1)];
    for(int i=0;i<qtd;i++){
        scanf("%f",&a[i]);
    }
    preencher(b,a,qtd);
    for(int r=0;r<(qtd-1);r++){
        if(r==0){
            printf("%g",b[r]);
        }
        else{
            printf(", %g",b[r]);
        }
    }
    printf(" %g",min(b,(qtd-1)));
    printf(" %g",max(b,(qtd-1)));
    return 0;
}

void preencher(float dif[], float lista[], int tam1){
    for(int j=0;j<(tam1-1);j++){
        dif[j] = (lista[j+1]-lista[j]);
    }
}

float min(float minimo[], int tam2){
    float menor = minimo[0];
    for(int k=0;k<tam2;k++){
        if(minimo[k]<menor){
            menor = minimo[k];
        }
    }
    return menor;
}

float max(float maximo[], int tam3){
    float maior = maximo[0];
    for(int t=0;t<tam3;t++){
        if(maximo[t]>maior){
            maior = maximo[t];
        }
    }
    return maior;
}