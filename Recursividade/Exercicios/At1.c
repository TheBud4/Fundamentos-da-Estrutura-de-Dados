#include<stdio.h>

int sucessor(int n) {
    return ++n;
}

int antecessor(int n) {
    return --n;
}

int soma(int a, int b) {

    if (a > 0)
        return soma(antecessor(a), sucessor(b));
    else
        return b;
}

main() {

    printf("%d", soma(8, 9));
}