#include <iostream>
using namespace std;

// 参照私を用いて、呼び出し側の変数の値を変更する
void saiten() {
    // ここにプログラムを追記
}


int main() {
    vector<vector<int>> A(9, vector<int>(9));
    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            cin >> A.at(i).at(j);
        }
    }

    int correct_count = 0;
    int wrong_count = 0;

    saiten(A, correct_count, wrong_count);

    for (int i = 0; i < 9; i ++) {
        for (int j = 0; j < 9; j ++) {
            cout << A.at(i).at(j);
            if (j < 8) cout << " ";
            else cout << endl;
        }
    }

    cout << correct_count << endl;
    cout << wrong_count << endl;
}