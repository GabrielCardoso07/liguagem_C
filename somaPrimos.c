/*Arquivo: somaPrimos.c
Data criacao: 27/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>
#include <stdbool.h>

bool primo(int a);

int main(void){
    int a, b, soma;
    soma = 0;
    printf("Digite um intervalo [a,b]: ");
    scanf("%d %d", &a, &b);
    for(int i = a; i <= b; i++){
        if(primo(i) && i!= 1){
            soma = soma + i;
        }
    }
    printf("%d\n", soma);

    return 0;
}

bool primo(int a){
    for(int i = 2;  i < a; i++){
        if(a%i == 0){
            return false;
        }
    }
    return true;
}
