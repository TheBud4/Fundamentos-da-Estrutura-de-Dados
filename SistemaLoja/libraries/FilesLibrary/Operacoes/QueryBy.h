#ifndef QUERY_H
#define QUERY_H

// FuncaoPredicado == alocaInt

pDLista QueryBy  (pDFile arq, FuncaoPredicado pred){
   
   if (arq->arquivo == NULL){
       printf("Arquivo nao foi aberto!");
       return NULL;
   }

   pDLista lista = CreateList();

   rewind(arq->arquivo);
   
   int result;
      do{
      void *dados = pfa();
      result = fread (dados, arq->tamanhoRegistro, 1, arq->arquivo);
      if (result == 0)
        continue;
      //pfi(dados);
      IncludeInfo(lista, dados);
   } while(result!=0);

   return lista;


   return NULL;
}

#endif

