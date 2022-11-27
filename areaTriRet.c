/*Arquivo: areaTriRet.c
Data criacao: 27/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/

#include <stdio.h>

int main(void){
    float xa, xb, ya, yb, xc, yc, area;
    printf("Coordenadas x e y do ponto A: ");
    scanf("%f %f", &xa,  &ya);
    printf("Coordenadas x e y do ponto B: ");
    scanf("%f %f", &xb, &yb);

    xc = xb;
    yc = ya;

    area = (xc-xa)*(yb-yc) / 2;
    printf("Area do triangulo: %.2f\n", area);

    return 0;
}