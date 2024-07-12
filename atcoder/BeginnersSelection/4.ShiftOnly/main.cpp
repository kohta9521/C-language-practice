#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i ++ ) {
        cin >> a[i];
    }
    int count = 0;
    while (true) {
        bool isAllEven = true;
        for (int i = 0; i < n; i ++ ) {
            if (a[i] % 2 != 0) {
                isAllEven = false;
                break;
            }
            a[i] /= 2;
        }
        if (isAllEven) {
            count ++;
        } else {
            break;
        }
    }
    cout << count << endl;
}