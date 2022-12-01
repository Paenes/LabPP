/**
* Arquivo: Maior número feliz
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 24/11/2022
*/

#include <stdio.h>
#include <math.h>

int pot(int x1);
int maiorPrimo(int y);

int main(void){
    int x;
    scanf("%d",&x);
    printf("%d",maiorPrimo(x));
    return 0;
}
int pot(int x1){
    if(x1 == 1){
        return 1;
    }
    else if(x1==4){
        return 0;
    }
    else{
        int i, numberAlone;
        int potencia = 1, somatorio = 0;
        for(i=x1;i>=10;i=i/10){
            potencia *= 10;
        }
        for(potencia;potencia>=10;potencia=potencia/10){
            numberAlone = (x1 - (x1%potencia))/potencia;
            somatorio += (numberAlone*numberAlone);
            x1 = (x1%potencia);
        }
        somatorio += (x1*x1);
        return pot(somatorio);
    }
}
int maiorPrimo(int y){
    int z,naoEPrimo,verdade=0;
    for(y;y>2;y--){
        naoEPrimo = 0;
        for(z=2;z<y;z++){
            if(y%z==0){
                naoEPrimo++;
            }
        }
        if(naoEPrimo==0){
            verdade=pot(y);
            if(verdade==1){
                return y;
        }
        }
    }
    return 0;
}