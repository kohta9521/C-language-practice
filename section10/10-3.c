#include <stdio.h>

int main(void) {
    //宣言と代入を別々に行う
    int array [10];
    array[5] = 15;
    printf("%d\n", array[5]);
    printf("%d\n", array[2]);
    printf("%d\n", array[20]);

    //配列の宣言と代入を同時に行う (配列の初期化)
    int num [5] = {12, 13, 14};
    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    printf("%d\n", num[3]);
    printf("%d\n", num[4]);

    //配列の要素数を省略
    int coc [] = {12, 13, 14};
    printf("%d\n", coc[1]);



    return 0;
}