#include <stdio.h>
#include "FuncoesGenericas.h"


void dobrarNumero(void* info) {
    int* p = (int*)info;
    *p = *p * 2;
}

int main() {
    int valores[] = {1, 2, 3, 4, 5}; //a funcao irá multiplicar por 2 cada numero do vetor
    void* ptrValores[5];
    int i;

    for (i = 0; i < 5; i++) {
        ptrValores[i] = &valores[i];
    }

    aplicarOperacao(ptrValores, 5, dobrarNumero);

    for (i = 0; i < 5; i++) {
        printf("%d ", valores[i]);
    }

    return 0;
}

