/*Arquivo: contaVogais.c
Data criacao: 08/12/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>
#include <string.h>
#define N 1024
 
 int main(void){
    char texto[N];
    int tam, cont;
    cont = 0;
    printf("Digite uma palavra, que nao seja diacritico: ");
    scanf("%s", texto);
    tam = strlen(texto);
    for(int i=0; i <= tam; i++){
        if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' || texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U' ){
            cont++;
        }
    }
    printf("Quantidade de vogais: %d\n", cont);
    return 0;
 }