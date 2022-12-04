/*Arquivo: muSigma.c
Data cricao: 04/12/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>
#include <math.h>

float media(float * vetor, int tamV);
float somatorio(float * vetor, int tamV);
float desvio(float * vetor, int tamV, float media);

int main(void){
    int n, arg;
    float Media, Desvio;
    printf("Quantos elementos: ");
    scanf("%d", &n);
    float vetor[n]; 
    for(int i = 0; i < n; i++) {
        printf("Informe o %dº elemento: ", i+1);
        scanf("%f", vetor+i);
    }
    Media = media(vetor, n);
    Desvio = desvio(vetor, n, Media);
    printf("media %g, desvio %g", Media, Desvio);

    return 0;
}

float media(float * vetor, int tamV){
    return somatorio(vetor, tamV) / tamV;
}

float desvio(float * vetor, int tamV, float media){
    float soma=0;
    for(int i=0; i<tamV; i++)
        soma += pow(vetor[i]-media, 2);
    return sqrt(soma/tamV);
}

float somatorio(float * vetor, int tamV){
    float soma=0;
    for(int i=0;i<tamV;i++)
        soma += vetor[i];
    return soma;
}