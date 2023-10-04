#include<stdio.h>

int egip(int a, int b) {

    if (a==0) 
        return 0;
    
    else if (a%2==0)
        return egip(a / 2, b * 2);
    
    else
        return b + egip((a - 1) / 2, b * 2);
}

main() {
    
    printf("resultado: %d", egip(8, 6));
    
}