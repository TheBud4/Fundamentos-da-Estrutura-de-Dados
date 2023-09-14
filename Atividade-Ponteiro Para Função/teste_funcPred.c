#include <stdio.h>
#include <stdlib.h>
#include "Utils.h"
#include "FuncoesGenericas.h"

int par (void* info){
    int* p=(int*)info;
    if(*p % 2 == 0)
        return 1; //1 = é par

    return 0; //0 = nao é par
}

int primo (void* info){
    
    int* p=(int*)info;
    int i;
    for(i=2; i< *p; i++){
        if(*p % i == 0)
            return 0;
    }
    return 1; 
}

int *alocaInt (int n){
    int* pi = malloc(sizeof(int));
    *pi = n;

    return pi;
}

void main(){
    int n;
    int v*[5];
    v[0]= alocaInt[6];
    v[1]= alocaInt[4];
    v[2]= alocaInt[5];
    v[3]= alocaInt[8];
    v[4]= alocaInt[13];
    n = contar(v,5,par);/
    printf("\n nº pares = %d",n);
    
     1
   
    n = contar(v,5,primo);
    printf("\n nº primo = %d",n);
    return 0;
}