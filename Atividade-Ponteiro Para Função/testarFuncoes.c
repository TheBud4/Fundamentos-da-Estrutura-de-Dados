#include <stdio.h>;
#include "FuncoesGenericas.h";

int serPar(void* info) {
    int* n = (int*)info;

    if (*n % 2 == 0) {
        return 1;
        }
    return 0;
    }
int* alocaInt(int n) {
    int* pi = malloc(sizeof(int));
    *pi = n;
    return pi;
    }
int main() {
    int n;
    int* v[5];

    v[0] = alocaInt(6);
    v[1] = alocaInt(4);
    v[2] = alocaInt(7);
    v[3] = alocaInt(1);
    v[4] = alocaInt(2);

    n = contar(v, 5, serPar);
    printf("Quantidade de pares: %d", n);
    return 0;
    }