#include<stdio.h>

int armstrong(int a){

    if(a>0)
        return pow(a%10, 3) + armstrong(a/10);
    
}

void eharmstrong(int a){

    int n = armstrong(a);
    if(n == a)
        printf("\n%d eh armstrong", a);
    else
        printf("\n%d nao eh armstrong", a);
}

main(){

    printf("armstrong %d", armstrong(8234));
    printf("\narmstrong %d", armstrong(371));
    eharmstrong(8234);
    eharmstrong(371);


}