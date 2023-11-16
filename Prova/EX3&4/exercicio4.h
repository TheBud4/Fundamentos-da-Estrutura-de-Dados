#ifndef EX4_H
#define EX4_H
#include "./Utils.h"
#include "./Lista.h"
#include <stdlib.h>
int incluirInfoBase(pDLista lista, void* info, void* infoBase, FuncaoComparacao fc) {
    pNoh pNovo = (pNoh)malloc(sizeof(Noh));
    if (pNovo == NULL) {
        return 0; 
    }
    
    pNovo->info = info;
    
    pNoh pAux = lista->primeiro;

    while (pAux != NULL) {
        if (fc(pAux->info, infoBase) == 0) {
            
            pNovo->prox = pAux->prox;
            pAux->prox = pNovo;
            return 1; 
        }
        pAux = pAux->prox;
    }
    
    if (lista->primeiro == NULL) {
        lista->primeiro = pNovo;
    }
    
    return 1; 
}

#endif //EX4_H