/**
* Arquivo: Contador de palavras
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>
#include <stdlib.h>

void contaOsTrem(void);

int main(void){
    contaOsTrem();
}

void contaOsTrem(void){
    char c;
    int i,palavras = 0;
    for(i=0;i<=1023;i++){
        c = getchar();
        if(c>='a'&&c<='z'||c>='A'&&c<='Z'||c==-121||c==-128){
            palavras++;
            while((c=getchar())!=' '&&c!='\n'&&(c=='-'||c==-121||c==-128||(c>='a'&&c<='z')||(c>='A'&&c<='Z'))){
            }
        }
        if(c=='\n'){
            break;
        }
    }
    if(i==1023){
        while((c=getchar())!='\n'&&c!=EOF);
    }
    printf("%d",palavras);
}