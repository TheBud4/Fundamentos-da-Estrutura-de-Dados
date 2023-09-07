/*
2. [PONTEIRO E MALLOC] Escreva um programa em C que leia um numero inteiro e
determina se e um numero perfeito. A logica do programa para determinar se um numero
e perfeito deve ser implementada com uma funçao.
*/
#include <stdio.h>

void numero_perfeito(int numero) {
   int n = 0, i = 1;
   for (i = 1; i <= numero / 2; i++) {

      if (numero % i == 0) {
         n = n + i;
      }
   }
   if (n == numero) {
      printf("%d eh um numero perfeito", numero);
   }
   else
      printf("%d nao eh um numero perfeito", numero);
}


int main() {

   int* pt;

   pt = (int*)malloc(sizeof(int));

   scanf("%d", pt);

   numero_perfeito(*pt);
}