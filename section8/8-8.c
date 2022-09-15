#include <stdio.h>

int fruits (int apple);

int main(vois) {
    int hoge;
    hoge = fruits(5);
    if (hoge < 3000) {
        printf("予算に収まりました。");
    } else {
        printf("予算オーバーです。");
    }
    printf("%d", hoge);
    return  0;
}

int fruits(int apple) {
    int kingaku;
    kingaku = apple * 300;
    return kingaku;
}