#include <stdio.h>

int main(void) {

    int x, y;
    puts("二つの整数を入力せよ。");
    printf("整数x : "); scanf("%d", &x); 
    printf("整数y : "); scanf("%d", &y); 

    printf("それらの和は%dで積は%dです。\n",  x + y, x * y);

    return 0;
}
