/*Arquivo: mdc.c
Data criacao: 05/01/2023
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>
int mdc(int a, int b);

int main(int argc, char** argv){
    int num1, num2, resp;
    printf("Digite dois numeros inteiros: ");
    scanf("%d %d", &num1, &num2);
    resp=mdc(num1, num2);
    printf("%d", resp);
    return 0;
}
int mdc(int a,int b){
    if(a%b==0){
        return b;
    }
    else {
        return mdc(b,(a%b));
    }
}
