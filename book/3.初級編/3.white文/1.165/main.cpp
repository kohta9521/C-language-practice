#include <iostream>
using namespace std;


int main() {
    // 入力
    int K, A, B;
    cin >> K >> A >> B;

    // フラグ
    bool exist = false;

    // 繰り返し
    for (int i = A; i <= B; i ++) {
        if (i % K == 0) {
            exist = true;
        }
    }

    // 出力
    if (exist) {
        cout << "OK" << endl;
    } else {
        cout << "NG" << endl;
    }
}