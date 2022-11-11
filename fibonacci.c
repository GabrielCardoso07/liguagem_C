/*Arquivo: fibonacci.c
Data criacao: 10/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso 
*/

#include <stdio.h>

int main(){
    int n, i, j, k ,t ;
    scanf("%d", &n);
    for(i=0, j=1, k=0, t=0; i<n; i++, t=k+j, k=j, j=t) printf("%d, ", k);

    printf("...\n");
    return 0;
}