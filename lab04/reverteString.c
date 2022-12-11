/*Arquivo: reverteString.c
Data criacao: 08/12/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>
#include <string.h>
#define N 1024

void upper(char * str);

int main(void){
    char texto[N], inverso[N];
    int tam;
    printf("Digite um texto: ");
    gets(texto);
    for(int i = strlen(texto)-1; i>=0; i--){
        inverso[strlen(texto)-1-i] = texto[i];
    }
    upper(inverso);
    printf("inverso: %s\n", inverso);
    return 0;
}


void upper(char * str){
    int i=0;
    while(str[i]){
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] -= ('a' - 'A');
        i++;
    }
}