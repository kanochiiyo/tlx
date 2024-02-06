#include <iostream>
using namespace std;

int main()
{
  int N, K;

  cin >> N;
  cin >> K;
  for (int i = 1; i <= N; i++)
  {
    if (i <= N && i % K != 0)
    {
      cout << i;
      cout << " ";
    }
    else if (i % K == 0)
    {
      cout << "* ";
    }
  }
  return 0;
}