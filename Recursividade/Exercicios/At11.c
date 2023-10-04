#include<stdio.h>

int inverter(int a, int b){
   
    if(a==0)
        return b;
    else
        return inverter(a/10, b*10 + a%10);

}

void ehpalin(int a){

    if(inverter(a, 0)==a)
        printf("\n%d eh palindromo", a);
    else
        printf("\n%d nao eh palindromo", a);
}

main(){
    
    ehpalin(123321);
    ehpalin(1321);
    
}