#ifndef DELETE_H
#define DELETE_H


void DeleteRecord(pDFile arq, void* chave, FuncaoComparacao pfc) {

    pDFile file = OpenFile(arq->arquivo, sizeof(arq->tamanhoRegistro));
    if (file == NULL) {
        perror("Erro ao abrir o arquivo");
        return;
    }

    void* registroAtual = malloc(arq->tamanhoRegistro);
    if (registroAtual == NULL) {
        perror("Erro ao alocar memória");
        fclose(file);
        return;
    }

   rewind(arq->arquivo);
    while (fread(registroAtual, arq->tamanhoRegistro, 1, file) == 1) {
        if (pfc(registroAtual, chave) == 0) {
            fseek(file, -arq->tamanhoRegistro, SEEK_CUR);
            fwrite(arq, arq->tamanhoRegistro, 1, file);
            break;
        }
    }
    free(registroAtual);
    fclose(file);
}


#endif
