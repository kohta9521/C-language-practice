#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int n = 1; n <= N; ++n) {
        if (n % 3 == 0 && n % 5 == 0) {
            cout << "FizzBuzz" << endl;
        } else if (n % 3 == 0) {
            cout << "Fizz" << endl;
        } else if (n % 5 == 0) {
            cout << "Buzz" << endl;
        } else {
            cout << n << endl;
        }
    }
}