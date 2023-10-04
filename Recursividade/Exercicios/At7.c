#include<stdio.h>

int hs(int n){

    if(n==1)
        return 1;
    else if(n%2==0)
        return n+hs(n/2);
    else
        return n+hs((n*3)+1);

}

main(){

    printf("%d", hs(8));
}