#ifndef UPDATE_H
#define UPDATE_H

void UpdateRecord(pDFile arq, void* chave, void* dados, FuncaoComparacao pfc, FuncaoAloca pfa) {

    void* registroEncontrado = RetrieveRecord(arq, chave, pfc);

    if (registroEncontrado != NULL) {

        memcpy(registroEncontrado, dados, arq->tamanhoRegistro);

        fseek(arq->arquivo, -arq->tamanhoRegistro, SEEK_CUR);

        fwrite(registroEncontrado, arq->tamanhoRegistro, 1, arq->arquivo);
        fflush(arq->arquivo);

        free(registroEncontrado);
    }
    else {
        printf("Registro nao encontrado para atualizacao.\n");
    }
}

#endif
