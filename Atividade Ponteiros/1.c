/* 1. [PONTEIRO E MALLOC] Escreva um programa em C que leia 2 numeros reais e imprime
a soma deles. */

#include <stdio.h>
#include <stdlib.h>

int main() {
    float *num1, *num2;

    num1 = (float *)malloc(sizeof(float));
    num2 = (float *)malloc(sizeof(float));

    printf("Escreva o primeiro numero: ");
    scanf("%f", num1);
    printf("Escreva o segundo numero: ");
    scanf("%f", num2);

    printf("A soma dos dois é: %f\n", *num1 + *num2);

    return 0;
}
