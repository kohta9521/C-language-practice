#include <stdio.h>

int main(void) {
    int n1, n2;
    double d1, d2;

    puts("整数と実数を二つずつ入力せよ。");
    printf("整数n1 : "); scanf("%d", &n1);
    printf("整数n2 : "); scanf("%d", &n2);
    printf("整数d1 : "); scanf("%lf", &d1);
    printf("整数d2 : "); scanf("%lf", &d2);
}