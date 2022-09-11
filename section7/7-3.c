#include <stdio.h>

int main(void) {

    // 100万円の元手を年利5%で運用したら何円後に１億円を超えるのか?
    int year = 1;
    double money = 1000000;

    while (money < 100000000) {
        year ++;
        money  = (money + 600000) * 1.05;
    }
    printf("%d年目:  %f 円となり、資産が１億円を超えます。", year, money);

    return 0;
}