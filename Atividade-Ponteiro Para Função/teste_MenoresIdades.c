#include <stdio.h>
#include "FuncoesGenericas.h"

// Implementação da função de impressão para FuncaoPessoa
void imprimirNome(struct Pessoa pessoa) {
    printf("Nome: %s\n", pessoa.nome);
}

int main() {
    // Criando um array de pessoas para teste
    struct Pessoa pessoas[3] = {
        {"Joao", 20},
        {"Maria", 16},
        {"Pedro", 25}
    };

    // Chamando a função identificarMenoresIdade
    identificarMenoresIdade(pessoas, 3, imprimirNome);

    return 0;
}
