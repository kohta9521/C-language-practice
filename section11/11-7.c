#include <stdio.h>
#include <string.h>

int main(void) {
    char str1  [15]= "Star";
    char str2 [] = "Wars";
    strcat (str1, str2);
    printf("%s", str1);

    return 0;
}