#include <stdio.h>

int main(void) {
    double r;

    printf("半径は :"); scanf("%lf", &r);

    printf("円の面積は%fです。\n", r * r * 3.14);


    return 0;
}