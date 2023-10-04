#include<stdio.h>
#include <stdlib.h>
int prox_primo(int a) {

    int s = a, i = 0;
    while (s > 1) {
        int n = 0;
        s++;
        for (i = 1;i <= s;i++) {
            if (s % i == 0)
                n++;
        }

        if (n == 2)
            return s;
    }

}

int mmc(int a, int b, int p) {

    if (a == 1 && b == 1)
        return 1;

    else if (a % p == 0 && b % p == 0)
        return p * mmc(a / p, b / p, p);

    else if (a % p != 0 && b % p != 0)
        return p * mmc(a, b, prox_primo(p));

    else if (a % p == 0 && b % p != 0)
        return mmc(a / p, b, p);

    else
        return p * mmc(a, b / p, p);
}

main() {
    printf("%d", prox_primo(5));
    printf("\n%d", mmc(6, 5, 2));
}