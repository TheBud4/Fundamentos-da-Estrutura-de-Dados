#include <stdio.h>


int fat(int n) {

    if (n == 0)
        return 1;
    if (n > 0)
        return n * fat(n - 1);

}
int main() {

    int r = fat(5);
    printf("%d\n", r);

    return 0;
}