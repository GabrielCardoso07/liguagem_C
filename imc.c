/*Arquivo: imc.c
Data Criacao: 09/11/2022
Autor: Gabriel Rodrigues Ferreira Cardoso
*/
#include<stdio.h>

int main(void){
    float peso, altura, IMC;
    printf("Qual seu peso? ");
    scanf("%f", &peso);
    printf("Qual sua altura? ");
    scanf("%f", &altura);

    IMC = peso / (altura * altura);
    
    if(IMC < 16){
        printf("%0.2f (Perigo de vide)", IMC);
    }
    if(IMC >= 16 && IMC < 17){
        printf("%0.2f (Muito abaixo do peso)", IMC);
    }
    if(IMC >= 17 && IMC < 18.5){
        printf("%0.2f (Abaixo do peso)", IMC);
    }
    if(IMC >= 18.5 && IMC < 25){
        printf("%0.2f (Peso normal)", IMC);
    }
    if(IMC >= 25 && IMC < 30){
        printf("%0.2f (Acima do peso)", IMC);
    }
    if(IMC >= 30 && IMC < 35){
        printf("%0.2f (Obesidade grau I)", IMC);
    }
    if(IMC >= 35 && IMC < 40){
        printf("%0.2f (Obesidade grau II)", IMC);
    }
    if(IMC >= 40){
        printf("%0.2f (Obesidade grau III)", IMC);
    }

    return 0;
}
