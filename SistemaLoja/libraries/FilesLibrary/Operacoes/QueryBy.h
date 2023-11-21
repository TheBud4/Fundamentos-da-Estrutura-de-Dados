#ifndef QUERY_H
#define QUERY_H

// FuncaoPredicado == alocaInt

pDLista QueryBy(pDFile arq, FuncaoPredicado pred){

   if (arq->arquivo == NULL){
      printf("Arquivo nao foi aberto!");
      return NULL;
   }
   rewind(arq->arquivo);

   pDLista lista = QueryAll(arq, AlocaCliente);


   int result;
   do{

   }while();

   return lista;
}

#endif
