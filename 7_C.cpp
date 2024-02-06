#include <iostream>
using namespace std;

int main()
{
    int N, k = 0;

    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (k > 9)
            {
                k = 0;
            }
            cout << k;
            k += 1;
        }
        cout << endl;
    }

    return 0;
}