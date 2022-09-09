#include <stdio.h>

int main(void) {

    int n;

    printf("整数を入力せよ:");
    scanf("%d", &n);

    printf("7を加えると%dです。\n",  n + 7);
    printf("7を減じると%dです。\n",  n - 7);
    printf("7を乗じると%dです。\n",  n * 7);
    printf("7を除した商は%dです。\n",  n / 7);
    printf("7を除した余剰は%dです。\n",  n % 7);


    return 0;
}