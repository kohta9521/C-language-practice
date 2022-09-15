#include <stdio.h>


int main(void) {
    double height, weight;

    printf("身長は何cm : ");  scanf("%lf", &height);
    printf("体重は何kg : ");  scanf("%lf", &weight);

    printf("BMIは%.2fです。\n", weight / ((height / 100.0) * (height / 100.0)));

    return 0;
}