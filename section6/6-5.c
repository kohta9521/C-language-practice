#include <stdio.h>

int main(void) {
    int suuti;
    scanf("%d", &suuti);
    if (suuti >= 5 && suuti <= 10) printf("5から10の間です");

    if (suuti <5 || suuti < 10) printf("5から10の間ではありません");

    return 0;
}