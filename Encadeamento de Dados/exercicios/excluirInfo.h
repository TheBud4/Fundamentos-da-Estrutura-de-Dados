#ifndef EXCLUIRINFO_H
#define EXCLUIRINFO_H
#include "../Cap3/Utils.h"
#include "../Cap3/Lista.h"
#include <stdlib.h>

int excluirInfo(pDLista pd, void *info, FuncaoComparacao pfc){

    pNoh atual, ant;
    atual = pd->primeiro;
    ant   = NULL;

    /* encontra a informa��o na lista */
    while(atual != NULL){
       if (pfc(atual->info, info) == 0)
          break;
       ant   = atual;
       atual = atual->prox;
    }

    /* verifica se a info existe na lista */
    if (atual != NULL){
        /* eh o primeiro da lista */
        if (atual == pd->primeiro)
            pd->primeiro = atual->prox;
        else
        /* eh o ultimo da lista */
        if (atual == pd->ultimo){
            pd->ultimo = ant;
            ant->prox  = NULL;
        } else
             /* estah no meio da lista */
             ant->prox = atual->prox;

        pd->quantidade--;
        free(atual);
        return 1;
    }

    return 0;
}

#endif //EXCLUIRINFO_H