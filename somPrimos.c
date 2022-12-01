/**
* Arquivo: Soma dos números primos em um intervalo
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>

int somaPrimo(int x1, int x2);

int main(void){
    int var1,var2;
    scanf("%d %d", &var1, &var2);
    printf("%d", somaPrimo(var1,var2));
    return 0;
}

int somaPrimo(int x1, int x2){
    int i,z,naoePrimo;
    int somatorio = 0;
        if(x1==1){
            x1+=1;
        }
    for(i=x1;i<=x2;i++){
        naoePrimo = 0;
        for(z=2;z<i;z++){
            if(i%z==0){
                naoePrimo++;
            }
        }
        if(naoePrimo==0){
            somatorio+=i;
        }
    }
    return somatorio;
}