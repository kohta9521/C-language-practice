#include <iostream>
using namespace std;

int main() {
    string A;
    cin >> A;
    int counter = 0;
    if (A[0] == '1') counter++;
    if (A[1] == '1') counter++;
    if (A[2] == '1') counter++;
    cout << counter << endl;
}