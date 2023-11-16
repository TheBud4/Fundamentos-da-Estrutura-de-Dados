#include "Utils.h"
#include <stdio.h>
#include <stdlib.h>
// -------------------------------------------------------
// -------------------------------------------------------
// Quest�o 1 - Troca de dois n�meros inteiros (ponteiros)
// -------------------------------------------------------
// -------------------------------------------------------

void main_1() {

  // implemente aqui a l�gica do programa.
  void* A = malloc(sizeof(int));
  void* B = malloc(sizeof(int));
  void* C = malloc(sizeof(int));
  A = alocaInt(1);
  B = alocaInt(2);
  C = A;
  A = B;
  B = C;
  imprimeInt(A);
  imprimeInt(B);
}

// -------------------------------------------------------
// -------------------------------------------------------
// Quest�o 2
// -------------------------------------------------------
// -------------------------------------------------------
typedef int (*FuncaoMapeamento)(void*);

// ----------------
float calcularMedia(void* dados[], int tam, FuncaoMapeamento fm) {

  // implemente aqui a l�gica da fun��o calcularMedia
  int soma = 0, i;

  for (i = 0; i < tam; i++) {
    int valor = fm(dados[i]);
    soma += valor;
  }
  if (tam == 0) {
    return 0.0;
  }

  return (float)soma / tam;
}
int mapeiaVetor(void* valor) {
  return *((int*)valor);
}
// --------
void main_2() {
  int* vetorInt[3];
  vetorInt[0] = alocaInt(4);
  vetorInt[1] = alocaInt(6);
  vetorInt[2] = alocaInt(3);
  int tamanho = sizeof(vetorInt) / sizeof(vetorInt[0]);
  float media = calcularMedia(vetorInt, tamanho, mapeiaVetor);
  printf("A media eh %f", media);
}
// -------------------------------------------------------
// -------------------------------------------------------
// Quest�o 3 - Recursividade
// -------------------------------------------------------
// -------------------------------------------------------
// ----------------
int perfeito(int n, int i) {
  if (i == 1) {
    return 1;
  }
  if (n % i == 0) {
    return i + perfeito(n, i - 1);
  }
  else {
    return perfeito(n, i - 1);
  }
}

int main() {
  int numero;
  printf("Digite um numero para verificar se eh perfeito: ");
  scanf("%d", &numero);
  int resultado = perfeito(numero, numero - 1);
  if (resultado == numero) {
    printf("%d eh  perfeito.\n", numero);
  }
  else {
    printf("%d nao eh perfeito.\n", numero);
  }
  return 0;
}

