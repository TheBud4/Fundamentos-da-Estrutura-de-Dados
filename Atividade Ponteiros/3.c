
/*
3. [PONTEIRO COM VETOR] Escreva um programa em C que leia um nu mero inteiro N e,
em seguida, aloque memo ria suficiente para armazenar N nu meros inteiros. Escreva
tambe m uma funça o que receba os N nu meros inteiros e retorne o maior nu mero dentre
eles.
Obs: NÃO use a notação de vetor da linguagem C para manipulação dos elementos do vetor,
utilize somente aritmética de ponteiros.
*/

#include <stdio.h>

int main() {

    int* n;
    int* vet;
    int i, * maior;

    n = (int*)malloc(sizeof(int));
    maior = (int*)malloc(sizeof(int));
    vet = malloc(sizeof(int) * (*n));

    printf("Informe quantas vezes ira realizar o loop:\n");
    scanf("%d", n);

    for (i = 0; i < *n; i++) {
        printf("Informe um numero: ");
        scanf("%d", vet);
        if (i == 1)
            *maior = *vet;
        if (*vet > *maior)
        {
            *maior = *vet;
        }
    }
    printf("Maior numero eh: %d", *maior);

    return 0;
}