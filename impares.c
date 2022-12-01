/**
* Arquivo: Números ímpares dentro de um intervalo
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>

int impar(int n, int m);

int main(void){
    int menor,maior;
    scanf("%d %d", &menor, &maior);
    if(menor < maior){
        impar(menor,maior);
    }

    return 0;
}

int impar(int n, int m){
    int i;
    if((n%2)==0){
        for(i = (n+1);i<=m;i+=2){
            printf("%d", i);
            if(i<(m-1)){
                printf(", ");
            }
        }
    }
    else{
        for(i = n;i<=m;i+=2){
            printf("%d", i);
            if(i<(m-1)){
                printf(", ");
            }
        }
    }
    return 0;
}