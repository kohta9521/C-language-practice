#include <stdio.h>

int main(void) {
    int array [5] = {12, 13, 14};
    int i;
    for (i = 0; i < sizeof(array) / sizeof(array[0]); i ++) {
        printf("%d番目 : %d\n", i, array[i]);
    }

    return 0;
}