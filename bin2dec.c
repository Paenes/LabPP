/**
* Arquivo: Binário para decimal
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i;
    long long unsigned int binDec = 0,numbOnelonglong = 1;
    char c;
    int v[64];
    for(i=0;i<64;){
        c = getchar();
        if(c=='0' || c=='1'){
            v[i] = (c-'0');
            i++;
        }
        if(c=='\n'){
            break;
        }
    }
    if(i==64){
        while((c=getchar())!='\n'&&c!=EOF); //limpar buffer teclado
    }
    for(int j=i;j>0;j--){
        binDec += (numbOnelonglong*v[j-1])<<(1*(i-j));
    }
    printf("%llu",binDec);
    return 0;
}