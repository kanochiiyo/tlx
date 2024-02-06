#include <iostream>
using namespace std;

int main()
{
    double N;
    int F, C, bilbul;

    cin >> N;
    bilbul = N;

    if (N == bilbul)
    {
        F = N;
        C = N;
    }
    else if (N > 0)
    {
        F = N;
        C = N + 1;
    }
    else
    {
        F = N - 1;
        C = N;
    }

    cout << F << " " << C;

    return 0;
}