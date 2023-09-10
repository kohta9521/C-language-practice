#include <iostream>
using namespace std;

int main()
{
  int N, A;
  cin >> N >> A;

  // program
  for (int i = 0; i < N; i++)
  {
    int x;
    string op;
    cin >> x >> op;

    if (op == "x")
    {
      A += x;
    }
    else if (op == "-")
    {
      A -= x;
    }
    else if (op == "*")
    {
      A *= x;
    }
    else if (op == "/" && != 0)
    {
      A /= x;
    }
    else
    {
      cout << "error" << endl;
      break;
    }
    cout << i + 1 << ":" << A << endl;
  }
}