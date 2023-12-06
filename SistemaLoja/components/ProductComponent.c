#include <stdlib.h>
#include <stdio.h>
#include "../libraries/FilesLibrary/Persistencia.h"
#include "../libraries/FilesLibrary/Utils.h"
#include "../libraries/ListsLibrary/Lista.h"

static pDFile ArqProduto;

static int ComparaCodProduto(void* info, void* chave) {
    struct Cliente* p = (struct Cliente*)info;
    int* key = (int*)chave;
    return *key - p->CPF;
};

static void ImprimeProduto(void* info) {
    struct Produto* produto = (struct Produto*)info;
    printf("\n- Codigo: %d \n- Descricao: %s \n- Preco: %f\n", produto->Codigo, produto->Descricao, produto->Preco);
}

static void AdicionarProduto() {
    ArqProduto = OpenFile("../database/Produtos.dat", sizeof(struct Produto));
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
    ArqProduto = OpenFile("../database/Produtos.dat", sizeof(struct Produto));
    int a;
    printf("\nDigite o codigo do produto que deseja remover!\n");
    scanf("%d", &a);

    DeleteRecord(ArqProduto, &a, ComparaCodProduto);

}

static void ListarProdutos() {

    ArqProduto = OpenFile("../database/Produtos.dat", sizeof(struct Produto));

    pDLista ListaProdutos = QueryAll(ArqProduto, AlocaProduto);

    int i;
    for (i = 1; i <= ListaProdutos->quantidade; i++) {
        struct Produto* pp = (struct Produto*)SearchInfoPos(ListaProdutos, i);
        ImprimeProduto(pp);
    }

}

static void EditarProduto() {
    void* a;
    ArqProduto = OpenFile("../database/Produtos.dat", sizeof(struct Produto));
    printf("\nDigite Codigo do Produto para atualizar: ");
    scanf("%d", &a);


    void* produtoExistente = RetrieveRecord(ArqProduto, &a, ComparaCodProduto);

    if (produtoExistente != NULL) {
        struct Produto* novoDados = (struct Produto*)produtoExistente;
        int op;

        printf("\n Deseja alterar o nome? Sim: 1, Nao: 0 :");
        scanf("%d", &op);

        if (op == 1) {
            printf("Digite o novo Nome do Produto: ");
            scanf("%s", novoDados->Descricao);
        }

        printf("\n Digite o novo preco do Produto: ");
        scanf("%d", &novoDados->Preco);


        novoDados->Codigo = a;


        update(ArqProduto, &a, novoDados, ComparaCodProduto, AlocaProduto);
        printf("Produto atualizado com sucesso.\n\n");
    }

    else {
        printf("Produto com Codigo %d nao encontrado para atualizacao.\n\n", a);

    }

}

static void ProcurarPorChave() {
    ArqProduto = OpenFile("../database/Produtos.dat", sizeof(struct Produto));
    void* a;
    printf("\n Insira o codigo do produto que deseja procurar!\n");
    scanf("%d", &a);
    pDLista Produto = RetrieveRecord(ArqProduto, &a, ComparaCodProduto);
    struct Cliente* pp = (struct Cliente*)Produto;
    ImprimeProduto(pp);
}

void exibirMenuProduto() {
    system("cls");
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
        printf("| 6 - Sair                        |\n");
        printf("----------------------------------- \n");
        fgets(op, sizeof(op), stdin);
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
        case '6':
            sair = 1;
            break;
        default:
            //printf("Opcao invalida!\n");
            break;
        }
    } while (sair != 1);
}