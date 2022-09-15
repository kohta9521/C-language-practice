#include <stdio.h>

int main(void) {
    int a, b;

    puts("二つの整数を入力せよ");
    printf("整数A : ");     scanf("%d", &a);
    printf("整数B : ");     scanf("%d", &b);

    if (a % b)
        printf("BはAの約数ではありません。");
    else
        printf("BはAの約数です。");

    return 0;
}