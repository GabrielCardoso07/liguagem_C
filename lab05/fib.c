/*Arquivo: fib.c
Data criacao: 09/01/2023
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int fib(int a);

int main(int argc, char** argv){
	

    int a, c;
    printf("Digite um numero: ");
	scanf("%d", &a);
    c = fib(a);
    printf("%d\n", c);

	return 0;
}


int fib(int a){
    if(a == 0){
        return 0;
    }
    else if(a == 1 || a == 2){
        return 1;
    }
    else
    {
        return fib(a-1) + fib(a-2);
    }
}