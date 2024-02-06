#include <iostream>
using namespace std;

int main()
{
    int i = 0, arr[101];

    while (cin >> arr[i]) // ketika masih ada input (yang dimana inputnya adalah int, maka loop terus jalan), kalau inputnya bukan int, loopnya berenti
    {
        i++;
    }

    while (i--) // balik
    {
        cout << arr[i] << endl;
    }
    return 0;
}