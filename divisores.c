/*Arquivo: divisores.c
Data criacao: 27/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int main(void){
    int div;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &div);

    for(int i = 1; i<div; i++){
        if(div%i == 0){
            printf("%d, ", i);
        }
    }
    printf("%d\n", div);
    
    return 0;
}