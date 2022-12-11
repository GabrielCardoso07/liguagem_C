/*Arquivo: dec2bin.c
Data criacao: 08/12/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int main(void){
    unsigned long long bin=0, num, cont=0, resp=0;
    printf("Digite um numero decimal: ");
    scanf("%lld", &num);
    do
    {
        bin = (bin * 10) + (num % 2);
        num = num / 2;
        cont++;
    }
    while (num > 0);
    do
    {
        cont--;
        resp = (resp * 10) + (bin % 2);
        bin = (bin - (bin % 2)) / 10;
    }
    while (cont > 0);
    printf("%d", resp);

    return 0;
}