#include<stdio.h>

float mdc(float h, float r){

    if(h<=0.001)
        return 0;
    else
        return h+(h*r) + mdc(h*r, r);

}

main(){

    printf("%f", mdc(8, 0.5));
}