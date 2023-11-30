#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void esperarTresSegundos(int tempo) {
    time_t inicio = time(NULL);
    time_t atual;
    do {
        atual = time(NULL);
    } while (difftime(atual, inicio) < tempo);
}

void exibirMenuPrincipal() {
    printf("\n --Bem Vindo--");
    esperarTresSegundos(3);
    system("clear");
    printf("Selecione o que deseja fazer a seguir\n");
    printf("--------------------------------\n");
    printf("| 1 - Logar no sistema         |\n");
    printf("| 2 - Logar como Administrador |\n");
    printf("| 3 - Sair                     |\n");
    printf("--------------------------------\n");
}

void exibirMenuUsuario(void) {
    system("clear");
    printf("Menu do Usuário:\n");

}

void exibirMenuAdministrador() {
    system("clear");
    char adm[2];
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
        fgets(adm, sizeof(adm), stdin);
        system("clear");
        switch (adm[0]) {
        case '1':
            break;
        case '2':
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

int main() {
    char op[2];
    int sair = 0;
    do {
        exibirMenuPrincipal();
        fgets(op, sizeof(op), stdin);
        switch (op[0]) {
        case '1':
            exibirMenuUsuario();
            sair = 1;
            break;
        case '2':
            exibirMenuAdministrador();
            sair = 1;
            break;
        case '3':
            sair = 1;
            break;
        default:
            printf("Opcao invalida!\n");
            break;
        }
    } while (!sair);
    printf("Programa encerrado.\n");
    return 0;
}
