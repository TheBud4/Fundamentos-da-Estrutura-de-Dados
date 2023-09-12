#include <stdio.h> 
int fat(int n) {

    if (n == 0)
        return 1;
    if (n > 0)
        return n * fat(n - 1);

}
int main() {
    int num;
    printf("informe um numero: \n");
    scanf("%d", &num);
    int r = fat(num);
    printf("%d\n", r);
    return 0;
}