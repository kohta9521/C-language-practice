#include <iostream>
using namespace std;

int main()
{
  int x, a, b;
  cin >> x >> a >> b;

  // 1 part
  x++;
  cout << x << endl;

  // 2 part
  int c;
  c = x * (a + b);
  cout << c << endl;

  // 3 part
  int d;
  d = c * c;
  cout << d << endl;

  // 4 part
  int e;
  e = d - 1;
  cout << e << endl;
}