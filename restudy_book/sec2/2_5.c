#include <stdio.h>

int main(void) {
    int x, y;

    puts("二つの整数を入力せよ。");
    printf("整数x : "); scanf("%d", &x);
    printf("整数y : "); scanf("%d", &y);

    int ave = (x + y) / 2;

    printf("平均値%dの符号を反転した値は%dです。\n", +ave, -ave);

    return 0;
}