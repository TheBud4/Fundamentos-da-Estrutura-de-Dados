#include<stdio.h>

int ocorr(int k, int n){

    if(n==0 && k!=0)
        return 0;
    else if(n%10==k)
        return 1+ocorr(k, n/10);
    else if(n%10!=k)
        return 0+ocorr(k, n/10);
}

main(){

    printf("%d", ocorr(8, 3456888));
}