#ifndef DELETE_H
#define DELETE_H

void DeleteRecord(pDFile arq, void* chave, FuncaoComparacao pfc){

        if (arq->arquivo == NULL) {
            printf("arquivo nao foi aberto!!");
            return NULL;
        }

        rewind(arq->arquivo);
        int result;

        do {
            void* dados = malloc(arq->tamanhoRegistro);
            result = fread(dados, arq->tamanhoRegistro, 1, arq->arquivo);
            if (result == 0)
                break;

            if (pfc(dados, chave) == 0) {
                fseek(arq->arquivo, -arq->tamanhoRegistro, SEEK_CUR);
                pfe(dados);
                fwrite(dados, arq->tamanhoRegistro, 1, arq->arquivo);
                break;

            }

        } while (result != 0);
}

#endif
