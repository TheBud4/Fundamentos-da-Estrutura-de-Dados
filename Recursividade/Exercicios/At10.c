#include<stdio.h>

int inverter(int a, int b){
   
    if(a==0)
        return b;
    else
        return inverter(a/10, b*10 + a%10);

}

main(){

    printf("%d", inverter(8234, 0));
    printf("\n%d", inverter(12345, 0));
}