/*Arquivo: fatorial.c
Data Criacao: 07/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/
#include <stdio.h>
#include <stdint.h>

int main(void){
    int n, fat, i;
    printf("Digite um valor maior que 1: ");
    scanf("%d", &n);
    fat = 1;
    for(i=1; i<=n; i++){
        fat = fat * i;
    }
        printf("%d\n", fat);

    return 0;
}
