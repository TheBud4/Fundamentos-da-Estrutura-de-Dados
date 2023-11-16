#include <stdio.h>
#include "Utils.h"
#include "Lista.h"

int main(){
    pDLista pListaInt = criarLista();

    /* teste de inclusao */
    incluirInfo(pListaInt, alocaInt(5));
    incluirInfo(pListaInt, alocaInt(3));
    incluirInfo(pListaInt, alocaInt(9));
    incluirInfo(pListaInt, alocaInt(1));
    //incluirInfoBase (pListaInt, alocaInt(9),alocaInt(3), comparaInt);
    incluirInfo(pListaInt, alocaInt(2));
    printf("\nResultado da inclusao \n");
    imprimirLista(pListaInt, imprimeInt);

    pDLista pListaInt2 = criarLista();

    /* teste de inclusao */
    incluirInfo(pListaInt2, alocaInt(5));
    incluirInfo(pListaInt2, alocaInt(3));
    incluirInfo(pListaInt2, alocaInt(9));
    incluirInfo(pListaInt2, alocaInt(1));
    incluirInfo(pListaInt2, alocaInt(2));
    printf("\nResultado da inclusao \n");
    imprimirLista(pListaInt2, imprimeInt);

   printf("\n%d",comparaLista(pListaInt,pListaInt2,comparaInt)); 
    destruirLista(pListaInt);
   destruirLista(pListaInt2);

    return 0;
}