#include <stdio.h>

int main(void) {
    int a, b, c;

    puts("台形の面積を求めます。");
    printf("上辺 : "); scanf("%d", &a);
    printf("下辺 : "); scanf("%d", &b);
    printf("高さ : "); scanf("%d", &c);

    printf("面積は%fです。\n", (a + b) * c / 2.0);

    return 0;
}