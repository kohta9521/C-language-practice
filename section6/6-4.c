#include <stdio.h>

int main(void) {
    int suuti;
    scanf("%d", &suuti);
    if (suuti < 10) printf("10未満です");
    if (suuti > 10) printf("10より大きいです");
    if (suuti == 10) printf("10と同じです");
    
    return 0;
}