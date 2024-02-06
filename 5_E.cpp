#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    if (0 < N && N <= 9)
    {
        cout << "satuan";
    }
    else if (0 <= N && N <= 99)
    {
        cout << "puluhan";
    }
    else if (100 <= N && N <= 999)
    {
        cout << "ratusan";
    }
    else if (1000 <= N && N <= 9999)
    {
        cout << "ribuan";
    }
    else if (10000 <= N && N <= 99999)
    {
        cout << "puluhribuan";
    }

    return 0;
}