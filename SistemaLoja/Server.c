#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "./components/ProductComponent.c"
void esperarTresSegundos(int tempo) {
    time_t inicio = time(NULL);
    time_t atual;
    do {
        atual = time(NULL);
    } while (difftime(atual, inicio) < tempo);
}

void exibirMenuPrincipal() {
    printf("\n --Bem Vindo--\n");
    esperarTresSegundos(3);
    system("cls");
    printf("Selecione o que deseja fazer a seguir\n");
    printf("--------------------------------\n");
    printf("| 1 - Opcoes de Usuario        |\n");
    printf("| 2 - Opcoes de Produto        |\n");
    printf("| 3 - Opcoes de Venda          |\n");
    printf("| 4 - Sair                     |\n");
    printf("--------------------------------\n");
}

void exibirMenuUsuario(void) {
    system("cls");
    printf("Menu do Usuário:\n");
}

int main() {
    char op[2];
    int sair = 0;
    do {

        exibirMenuPrincipal();
        fgets(op, sizeof(op), stdin);
        switch (op[0])
        {
        case '1':
            exibirMenuUsuario();
            sair = 1;
            break;
        case '2':
            exibirMenuProduto();
            sair = 1;
            break;
        case '3':
            sair = 1;
            break;
        case '4':
            sair = 1;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (sair != 1);
    printf("Programa encerrado.\n");
    return 0;
}
