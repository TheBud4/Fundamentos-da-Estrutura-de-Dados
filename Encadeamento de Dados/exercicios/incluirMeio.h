#ifndef INCLUIRMEIO_H
#define INCLUIRMEIO_H
#include "../Cap3/Utils.h"
#include "../Cap3/Lista.h"
#include <stdlib.h>

void incluirMeio(pDLista pd, void* info,void* param) {
    if (pd == NULL) {
        printf("Lista nao existe ainda, nao eh possivel incluir!");
        return;
    }
    /* aloca memoria para guardar a nova info */
    pNoh pNovo = malloc(sizeof(Noh));

    pNoh pAux= pd->primeiro;

    while (pAux != param) {
        pAux = pAux->prox;
    }
    printf("aaa");
    pNovo->prox = pAux->prox;
    pNovo->info = info;
    pAux->prox = pNovo;

    pd->quantidade++;
}

#endif //INCLUIRMEIO_H