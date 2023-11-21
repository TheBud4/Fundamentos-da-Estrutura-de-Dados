#include <stdio.h>
#include <strings.h>
#include "Persistencia.h"
#include "../ListsLibrary/Lista.h"
#include "Utils.h"

void imprimePessoa(void *info)
{
  struct Cliente *c = (struct Cliente *)info;
  printf("\n- CPF: %d \n- Nome: %s \n- Limite de Credito: %f\n", c->CPF, c->Nome, c->LimiteCredito);
}
int main()
{

  pDFile ArqCliente;

  ArqCliente = OpenFile("Pessoas.dat", sizeof(struct Cliente));

  // int op = 1;
  // while (op != 0) {
  //  printf("Digite o cpf: \n ");
  //   scanf("%d", &cliente.CPF);
  //   fflush(stdin);
  //  printf("Digite o nome: \n ");

  //   fgets(cliente.Nome, 30, stdin);
  //   fflush(stdin);
  //  printf("Digite o limite de credito: \n ");

  //   scanf("%f", &cliente.LimiteCredito);
  //   fflush(stdin);

  //   CreateRecord(ArqCliente, &cliente);
  //   //update(ArqCliente, alocaInt(456), &p, comparaPessoaChave, alocaPessoa);

  //   printf("Quer cadastrar outra pessoa? (0 - Nao, 1 - Sim) = ");
  //   scanf("%d", &op);
  //   fflush(stdin);
  // }

  pDLista listaPessoas = QueryAll(ArqCliente, AlocaCliente);

  int i;
  for (i = 1; i <= listaPessoas->quantidade; i++){
    struct Cliente *pp = (struct Cliente *)SearchInfoPos(listaPessoas, i);
    imprimePessoa(pp);
  }
  printf("\nPesquisa de Usuario!\n");
  void *a[30];
  fgets(a, 30, stdin);
  fflush(stdin);

  pDLista listaPesquisa = QueryBy(ArqCliente, AlocaCliente(a));

  int j;
  for (j = 1; j <= listaPessoas->quantidade; j++){
    struct Cliente *pp = (struct Cliente *)SearchInfoPos(listaPesquisa, j);
    imprimePessoa(pp);
  }

  CloseFile(ArqCliente);
}
