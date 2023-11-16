#ifndef INCLUIRINICIO_H
#define INCLUIRINICIO_H
#include "../Cap3/Utils.h"
#include "../Cap3/Lista.h"
#include <stdlib.h>

void incluirInicio(pDLista pd, void *info){
if (pd == NULL){
        printf("Lista nao existe ainda, nao eh possivel incluir!");
        return;
    }
    /* aloca memoria para guardar a nova info */ 
    pNoh pNovo = malloc(sizeof(Noh));

    /* guarda a informa��o no campo "info" do novo noh alocado */
    pNovo->info = info;

    pNovo->prox = pd->primeiro;
    
    pd->primeiro = pNovo;
    /* a lista tem mais um noh */
    pd->quantidade++;
}

#endif //INCLUIRINICIO_H
