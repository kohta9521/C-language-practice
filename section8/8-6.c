#include <stdio.h>
int fruits(int apple, int orange);

int main(void) {
    fruits(5, 6);

    return 0;
}

int fruits(int apple, int orange) {

    printf("%d", (apple * 300) + (orange * 200));
    return 0;
}