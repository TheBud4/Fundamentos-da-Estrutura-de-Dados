#include<stdio.h>

int russa(int a, int b) {

    if (a == 1)
        return b;
    else if (a > 1 && a % 2 == 0)
        return russa(a / 2, b * 2);
    else
        return b + russa(a / 2, b * 2);

}

main() {

    printf("%d", russa(8, 4));
    printf("\n%d", russa(6, 6));
}