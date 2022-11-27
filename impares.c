/*Arquivo: impares.c
Data criacao: 24/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>


int main(void){
    int a, b, i;
    printf("Digite um intervalo [a,b]: ");
    scanf("%d %d", &a, &b);
    for(i=a; i<=b; i++){
        if(i%2 != 0){
            printf("%d, ", i);
        }
    }
    return 0;   
}
