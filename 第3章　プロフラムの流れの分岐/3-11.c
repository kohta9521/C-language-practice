#include <stdio.h>

int main(void) {
    int a, b, c;

    puts("三つの整数を入力せよ。");
    printf("整数A : "); scanf("%d", &a);
    printf("整数B : "); scanf("%d", &b);
    printf("整数C : "); scanf("%d", &c);

    if (a == b && b == c)
        puts("三つの値は等しいです。");
    else if (a == b || b == c || c == a)
        puts("二つの値が等しいです。");
    else
        puts("三の値は異なります。");

    

    return 0;
}