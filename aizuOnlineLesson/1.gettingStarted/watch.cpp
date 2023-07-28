#include <iostream>

int main()
{
  int S, h, m, s;
  std::cin >> S;
  h = S / 60;
  m = S % 60;
  s = m / 60;

  std::cout << S << ":" << m << " " << s << std::endl;

  return 0;
}