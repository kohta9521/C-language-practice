#include <stdio.h>

int main(void) {

    int age;
    scanf("%d", &age);

    if (age <= 3) {
        printf("0円です");
    } else if (age <= 20) {
        printf("1000円です");
    } else {
        printf("2000円です");
    }

    return 0;
}