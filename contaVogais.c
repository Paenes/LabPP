/**
* Arquivo: Contador de vogais
* Autor: Thúlio S. Arrais
* Matricula: 12121ECP005
* Criado em: 08/12/2022
*/

#include <stdio.h>

void lele(char * str, int nchar); //Escreve a palavra com no máximo 100 caracteres;
int contavogal(char a[], long long int tam); //Conta quantas vogais há na palavra;
long long int tamMain(char *vetor); //Varre o vetor e retorna seu tamanho;

int main(){
    char vec[100];
    lele(vec,100);
    printf("Essa palavra tem %d vogal(is)", contavogal(vec,tamMain(vec)));
    return 0;
}

int contavogal(char a[], long long int tam){
    int vogal=0;
    for(int j=0;j<tam;j++){
        
        switch(a[j]){
            case 'A': case 'E': case 'I': case 'O': case 'U':
            case 'a': case 'e': case 'i': case 'o': case 'u':
                vogal++;
        }
    }
    return vogal;
}

void lele(char * str, int nchar){
    char c;
    int i;
    for(i=0;i<nchar;i++){
        c=getchar();
        if(c!='\n'){
            str[i]=c;
        }
        else{
            str[i]='\0';
            break;
        }
    }
    if(i==nchar){
        str[nchar-1]='\0';
        while((c=getchar())!='\n'&&c!=EOF); //limpar buffer teclado
    }
}

long long int tamMain(char *vetor){
    long long int tam = 0;
    while(vetor[tam]){
        tam++;
    }
    return tam;
}