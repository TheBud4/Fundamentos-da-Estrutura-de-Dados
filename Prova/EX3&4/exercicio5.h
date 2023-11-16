#ifndef EX5_H
#define EX5_H
#include "./Utils.h"
#include "./Lista.h"
#include <stdlib.h>

int comparaLista(pDLista lista1, pDLista lista2, FuncaoComparacao fc) {
    
    if (lista1 == NULL || lista2 == NULL) {
        return 0; 
    }

    if (lista1->quantidade != lista2->quantidade) {
        return 0; 
    }

    pNoh pLista1 = lista1->primeiro;

    while (pLista1 != NULL) {
        pNoh pLista2 = lista2->primeiro;
        int encontrado = 0;

        while (pLista2 != NULL) {
            if (fc(pLista1->info, pLista2->info) == 0) {
                encontrado = 1;
                break;
            }
            pLista2 = pLista2->prox;
        }

        if (!encontrado) {
            return 0; 
        }

        pLista1 = pLista1->prox;
    }

    return 1; // As listas são iguais
}


#endif //EX5_H
