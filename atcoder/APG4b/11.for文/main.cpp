#include <iostream>
using namespace std;

int main() {
    int N, A;
    cin >> N >> A;

    for (int i = 0; i < N; i ++) {
        int x;
        string op;
        cin >> op >> x;

        if (op == "+") {
            A += x;
        }
        else if (op == "-") {
            A -= x;
        }
        else if (op == "*") {
            A *= x;
        }
        else if (op == "/") {
            if (x == 0) {
                cout << "error" << endl;
                break;
            }
            A /= x;
        }
        else {
            cout << "error" << endl;
            break;
        }

        cout << i + 1 << ":" << A << endl;
    }
}
