
/*
3. [PONTEIRO COM VETOR] Escreva um programa em C que leia um numero inteiro N e,
em seguida, aloque memoria suficiente para armazenar N numeros inteiros. Escreva
tambem uma funça o que receba os N numeros inteiros e retorne o maior numero dentre
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
        if (i == 0)
            *maior = *vet;
        if (*vet > *maior)
            *maior = *vet;
        
    }
    printf("Maior numero eh: %d", *maior);

    return 0;
}