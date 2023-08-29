#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    int Tb = 0;
    for (int i = 0; i < N; i++)
    {
        int Bi;
        cin >> Bi;
        Tb += Bi;
    }

    cout << Tb;
    return 0;
}