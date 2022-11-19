#include <stdio.h>

int main(void) {
    int n;

    puts("nの値を入力せよ : ");
    scanf("%d", &n);

    printf("n / 5は%dです。\n", n / 5);
    printf("n %% 5は%dです。\n", n % 5);

    return 0;
}