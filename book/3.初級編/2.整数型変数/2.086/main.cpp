#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B;
    C = A * B;
    if (C % 2 == 0) {
        cout << "Even" << endl;
    } else {
        cout << "Odd" << endl;
    }
}