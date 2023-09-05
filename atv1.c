#include <stdio.h>
#include <math.h>

int teste1(float a, int (*pxy)(int)){
 if (a > 0.0f)
    printf(" -- %d", pxy(5));
}

int  fatorial(int n){ printf("\n executando funcao Fatorial"); return n;}
int  primo   (int x){ printf("\n executando funcao Primo"   ); return x;}
int  perfeito(int y){ printf("\n executando funcao Perfeito"); return y;}


void main(){
   teste1(2.1415f, fatorial);

   teste1(-0.5f,   primo);

   teste1(-0.5f,   perfeito);
}

