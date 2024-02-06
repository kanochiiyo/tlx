#include <iostream>
using namespace std;

int main()
{
  int A = -100000, B = 100000, N, x;
  cin >> N;
  for (int i = 0; i < N; i++)
  {
    cin >> x;
    if (x > A)
    {
      A = x;
    }
    if (x < B)
      B = x;
  }
  cout << A << " " << B;

  return 0;
}