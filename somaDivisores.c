/*Arquivo: somaDivisores.c
Data criacao: 10/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int main(){
    int n, i;
    int soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++){
        if(n % i == 0){
            soma = soma +i;
        }
    }
    printf("Soma dos divisores: %d\n", soma);

    return 0;
}