#include <stdio.h>

int main(void) {
    
    int no; //noを定義

    printf("整数を入力してください:");//普通に出力
    scanf("%d", &no);//scanf関数を入力を出力

    printf("%dに13を加えると", no);
    printf("%dです。\n", no + 13);

    return 0;
}