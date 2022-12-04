/*Arquivo: dist.c
Data criacao: 24/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>
#include <math.h>

int main(void){
    float xa, xb, ya, yb, raiz;
    printf("Digite duas coordenadas: ");
    scanf("%f %f", &xa,  &ya);
    printf("Digite dois pontos: ");
    scanf("%f %f", &xb, &yb);

    raiz = (sqrt(pow(xa - xb, 2) + (pow(ya - yb, 2))));
    printf("Distancia euclidiana: %.2f\n", raiz);

    return 0;
}