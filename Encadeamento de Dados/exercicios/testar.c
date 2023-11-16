#include "../Cap3/Utils.h"
#include "../Cap3/Lista.h"
#include <stdlib.h>

int main (){
    pDLista pListaInt = criarLista();

    /* teste de inclusao */
    incluirInfo(pListaInt, alocaInt(5));
    incluirInfo(pListaInt, alocaInt(3));
    incluirInfo(pListaInt, alocaInt(9));
    incluirMeio(pListaInt, alocaInt(3),alocaInt(2));
    printf("\nResultado da inclusao \n");
    imprimirLista(pListaInt, imprimeInt);

    /* teste de exclusao */
    /*excluirInfo(pListaInt, alocaInt(9), comparaInt);
    printf("\nResultado da exclusao \n");
    imprimirLista(pListaInt, imprimeInt);*/

    /* teste de busca */
   /* int result = contemInfo(pListaInt, alocaInt(5), comparaInt);
    printf("\nResultado da busca do n�mero 5: 0-[Nao encontrou], 1-[ok] -> %d\n", result);*/

    /* teste de duplicacao de lista */
   /* pDLista copia = duplicarLista(pListaInt, alocaInfoInt);
    printf("\nResultado da duplicacao \n");
    imprimirLista(copia, imprimeInt);*/

    /* teste de divisao de lista */
  /*  pDLista novaLista = dividirLista(pListaInt, 3);
    printf("\nResultado da divisao \n");
    printf("    Lista Original: ");
    imprimirLista(pListaInt, imprimeInt);
    printf("\n    Nova Lista: ");
    imprimirLista(novaLista, imprimeInt);*/

    /* teste de destruicao da lista */
    destruirLista(pListaInt);
    printf("\nResultado da destruicao da lista \n");
    imprimirLista(pListaInt, imprimeInt);
    return 0;
}
