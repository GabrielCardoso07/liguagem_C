/*Arquivo: aproxpi.c
Data criacao: 09/01/2023
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

double apr(int n);

int main(int argc, char** argv){
	
    int n;
    double s;
    printf("Digite um numero: ");
	scanf("%d", &n);
    s = apr(n);
    printf("%lf\n", s);

	return 0;
}


double apr(int n){
    if(n == 0){
        return 4;
    }
    // return apr(n-1) + 4* (pow(-1, n))/(2*n+1);
    return apr(n-1) + 4.0* ((n%2==0)? 1 : -1)/(2*n+1);
    
}