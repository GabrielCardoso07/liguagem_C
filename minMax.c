/*Arquivo: minMax.c
Data criacao: 03/12/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int Max(int * vetor,int tamVet);
int Men(int * vetor,int tamVet);

int main(void){
    int a, max, men;
    printf("Quantidade de elementos: ");
    scanf("%d", &a);
    int vetor[a];
    for(int i=0; i < a; i++){
        printf("Elemento[%d]: ", i+1);
        scanf("%d", vetor+i);
    }
    max = Max(vetor, a);
    men = Men(vetor, a);
    for(int i=0; i < a; i++){
        printf("%d", vetor[i]);
        if(vetor[i]==max)
            printf(">");
        if(vetor[i]==men)
            printf("<");
        printf(" ");
    }
    printf("\n");
    return 0;
}

int Max(int * vetor,int tamVet){
    int max = vetor[0];
    for(int i=0; i < tamVet; i++)
        if(vetor[i]>max)
            max = vetor[i];
    return max;
}

int Men(int * vetor,int tamVet){
    int men = vetor[0];
    for(int i=0; i < tamVet; i++)
        if(vetor[i]<men)
            men = vetor[i];
    return men;
}