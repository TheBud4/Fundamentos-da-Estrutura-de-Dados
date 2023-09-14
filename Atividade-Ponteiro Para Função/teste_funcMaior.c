#include "FuncoesGenericas.h"
#include "Utils.h"

//--------------------------------------------
int  comparaInt (void *info1, void *info2){
    return *((int*)info2) - *((int*)info1);
}

//--------------------------------------------
void main(){

  int *  vi[5];

  vi[0] = alocaInt(31);
  vi[1] = alocaInt(58);
  vi[2] = alocaInt(2);
  vi[3] = alocaInt(17);
  vi[4] = alocaInt(12);

  void *maior;
  maior = encontrarMaior(vi, 5, &comparaInt);

  printf("Maior = %d", *((int*)maior));


}
