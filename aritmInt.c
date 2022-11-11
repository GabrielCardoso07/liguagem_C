/*Arquivo: aritmInt.c
Data criacao:06/11/2022
Autor: Gabriel Rodrigues F Cardoso
*/
#include <stdio.h>

int main(){
    int X, Y, soma, sub, mult, div, mod;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &X, &Y);
    soma = X + Y;
    sub = X - Y;
    mult = X * Y;
    div = X / Y;
    mod = X % Y;
    printf("%d %d %d %d %d\n", soma, sub, mult, div, mod);


    return 0;
}
