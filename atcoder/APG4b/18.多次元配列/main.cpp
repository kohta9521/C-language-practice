#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i ++) {
        cin >> A.at(i) >> B.at(i);
    }

    // まず多次元配列を定義
    vector<vector<char>> table(N, vector<char>(N, '-'));

    for (int i = 0; i < M; i ++) {
        // 1 ~ N -> 0 ~ M - 1に変換
        A.at(i)--; B.at(i)--;
        table.at(A.at(i)).at(B.at(i)) = 'o';  // AはBに勝った
    table.at(B.at(i)).at(A.at(i)) = 'x';  // BはAに負けた
    }

    for (int i = 0; i < M; i ++) {
        for (int j = 0; j < N; j ++) {
            cout << table.at(i).at(j);
            if (j == N - 1) {
                cout << endl;
            }
            else {
                cout << " ";
            }
        }
    }
}