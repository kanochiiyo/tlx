#include <iostream>
using namespace std;

int main()
{
    int N, arr[1001] = {0}, i, num, mode;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        cin >> num;
        arr[num]++;
    }

    mode = 0;

    for (int i = 0; i <= 1000; i++)
    {
        if (arr[i] >= arr[mode])
        {
            mode = i;
        }
    }

    cout << mode;
    return 0;
}