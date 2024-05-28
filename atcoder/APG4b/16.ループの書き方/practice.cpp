#include <iostream>
using namespace std;


int main() {
    vector<int> data(5);
    for (int i = 0; i < 5; i ++) {
        cin >> data.at(i);
    }

    // 追記
    int answer = 0;

    if (data.at(0) == data.at(1)) {
        answer ++;
    }
    if (data.at(1) == data.at(2)) {
        answer ++;
    }
    if (data.at(2) == data.at(3)) {
        answer ++;
    }
    if (data.at(3) == data.at(4)) {
        answer ++;
    }
}