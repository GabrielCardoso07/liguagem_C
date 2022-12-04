/*Arquivo: somaSeqHailst.c
Data criacao: 27/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int main(void){
    int a, soma;
    soma = 0;
    printf("Digite um inteiro: ");
    scanf("%d", &a);

    while(1 == 1){
        if(a == 1){
            soma = soma + a;
            break;
        }
        if(a%2 == 0){
            soma = soma + a;
            a = a/2;
        }
        else{
            soma = soma + a;
            a = 3*a + 1;
        }
    }
    printf("Soma eh : %d\n", soma);

    return 0;
}