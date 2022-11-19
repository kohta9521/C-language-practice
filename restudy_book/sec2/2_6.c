#include <stdio.h>

int main(void) {
    double x;

    printf("実数で入力せよ。");
    scanf("%lf", &x);

    printf("あなたは%fと入力しましたね\n", x);

    return 0;
}