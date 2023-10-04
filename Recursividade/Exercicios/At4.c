#include<stdio.h>

int mdc(int a, int b){

    if(b==0)
        return a;
    else if(b>0)
        return mdc(b, a%b);

}

main(){

    printf("%d", mdc(8, 15));
}