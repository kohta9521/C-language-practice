#include <stdio.h>

int main(void) {

    int a, b;

    puts("二つの整数を入力せよ。");
    printf("整数A : "); scanf("%d", &a);
    printf("整数B : "); scanf("%d", &b);

    if (a == b) 
        puts("二つの値は同じです。");
    else {
        int min, max;

        if (a < b) {
            min = a;
            max = b;
        } else {
            min = b;
            max = a;
        }

        printf("小さい方の値は%dです。\n", min);
        printf("大きい方の値は%dです。\n", max);
    }


    return 0;
}