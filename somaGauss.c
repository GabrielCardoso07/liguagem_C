/*Arquivo: somaGauss.c
Data criacao: 07/11/2020
Autor: Gabriel Rodrigues Ferreira Cardoso
*/
#include <stdio.h>

int main(int agrc, char** argv){
    int n, soma;
    printf("Digite um numero maior que 1: ");
    scanf("%d", &n);
    soma = ((n+1)*n)/2;
    printf("%d", soma);

    return 0;
}

