#include <stdlib.h>
#include <stdio.h>
#include "../libraries/FilesLibrary/Persistencia.h"
#include "../libraries/FilesLibrary/Utils.h"
#include "../libraries/ListsLibrary/Lista.h"
      
   static pDFile ArqProduto;

static void ImprimeProduto(void* info) {
    struct Produto* produto = (struct Produto*)info;
    printf("\n- Codigo: %d \n- Descricao: %s \n- Preco: %f\n", produto->Codigo, produto->Descricao, produto->Preco);
}

static void AdicionarProduto() {
    ArqProduto = OpenFile("prod.dat", sizeof(struct Produto));
    printf("--Adicionar Produto--\n");

    int op = 1;

    while (op != 0) {
        printf("\nDIGITE O CODIGO DO PRODUTO:  ");
        scanf("%d", &produto.Codigo);
        fflush(stdin);

        printf("\nDIGITE O NOME:  ");
        fgets(produto.Descricao, 64, stdin);
        fflush(stdin);

        printf("\nDIGITE O VALOR UNITARIO DO PRODUTO:  ");
        scanf("%f", &produto.Preco); 
        fflush(stdin);

        CreateRecord(ArqProduto, &produto);

        printf("Quer cadastrar outro produto? (0 - Nao, 1 - Sim) = ");
        scanf("%d", &op);
        fflush(stdin);
    }
    CloseFile(ArqProduto);
}
static void RemoverProduto() {

}

static void ListarProdutos() {
    pDLista ListaProdutos = QueryAll(ArqProduto, AlocaProduto);

    int i;
    for (i = 1; i <= ListaProdutos->quantidade; i++) {
        struct Produto* pp = (struct Produto*)SearchInfoPos(ListaProdutos, i);
        ImprimeProduto(pp);
    }

}


static void EditarProduto() {

}
static void ProcurarPorChave() {

}

void exibirMenuProduto() {
    system("clear");
    char op[2];
    int sair = 0;
    do {
        printf("Menu do Administrador:\n");
        printf("-----------------------------------\n");
        printf("| 1 - Adicionar Produto           |\n");
        printf("| 2 - Remover Produto             |\n");
        printf("| 3 - Editar Produto              |\n");
        printf("| 4 - Listar Produtos             |\n");
        printf("| 5 - Procurar Por Chave          |\n");
        printf("| 6 - Adicionar Lista de Produtos |\n");
        printf("| 7 - Sair                        |\n");
        printf("| 8 - Sair                        |\n");
        printf("----------------------------------- \n");
        fgets(op, sizeof(op), stdin);
        system("clear");
        switch (op[0]) {
        case '1':
            AdicionarProduto();

            break;
        case '2':
            RemoverProduto();

            break;
        case '3':
            EditarProduto();

            break;
        case '4':
            ListarProdutos();

            break;
        case '5':
            ProcurarPorChave();

            break;
        case '8':
            sair = 1;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (!sair);
}