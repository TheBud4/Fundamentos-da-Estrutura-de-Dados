#include<stdio.h>

int primo(int a, int b){

    if(a==b)
        return 1;
    else if(a%b==0)
        return 1 + primo(a,++b);
    else
        return 0 + primo(a,++b);
}

void ehprimo(int a){

    int prim = primo(a, 1);

    if(prim<=2)
        printf("\nO valor %d eh primo", a);
    else
        printf("\nO valor %d nao eh primo", a);
}

main(){

    printf("%d", primo(8, 1));
    printf("\n%d", primo(5, 1));
    ehprimo(13);
    ehprimo(12);
}