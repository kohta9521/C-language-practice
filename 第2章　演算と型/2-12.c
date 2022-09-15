#include <stdio.h>

int main(void) {
    int height;

    printf("身長を入力せよ :  ");
    scanf("%d", &height);  //身長を読み込む

    printf("標準体重は%.lfです。\n", (height = 100) * 0.9);

    return 0;
}