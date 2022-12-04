/*Arquivo: remNegativos.c
Data cricao: 04/12/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int vazio(int * vetor, int tamV);

int main(void){
    int n, arg;
    printf("Quantos elementos: ");
    scanf("%d", &n);
    int vetor[n]; 
    for(int i = 0; i < n; i++) {
        printf("Informe o %dº elemento: ", i+1);
        scanf("%d", vetor+i);
    }
    if(vazio(vetor, n))
        printf("vazio");
    else
        for(int i=0; i<n; i++)
            if(vetor[i]>=0)
                printf("%d, ", vetor[i]);
    return 0;
}

int vazio(int * vetor, int tamV){
    for(int i=0; i<tamV; i++)
        if(vetor[i]>=0)
            return 0;
    return 1;
}