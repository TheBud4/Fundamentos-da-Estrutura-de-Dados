#include<stdio.h>

int sucessor(int n){
    return ++n;
}

int antecessor(int n){
    return --n;
}

int mult(int a, int b){

    if(b>0)
        return a + mult(a, antecessor(b));
    else
        return 0;
}

main(){

    printf("%d", mult(8, 9));
}