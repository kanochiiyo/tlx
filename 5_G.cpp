<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2, jx, jy, j;
    cin >> x1 >> y1 >> x2 >> y2;

    jx = x1 - x2;
    jy = y1 - y2;

    if (jx < 0)
    {
        jx = jx * -1;
    }

    if (jy < 0)
    {
        jy = jy * -1;
    }

    j = jx + jy;
    cout << j;
=======
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x1, x2, y1, y2, jx, jy, j;
    cin >> x1 >> y1 >> x2 >> y2;

    jx = x1 - x2;
    jy = y1 - y2;

    if (jx < 0)
    {
        jx = jx * -1;
    }

    if (jy < 0)
    {
        jy = jy * -1;
    }

    j = jx + jy;
    cout << j;
>>>>>>> 1fe3f7e92e4bd3203c00b25dc7b53a68bc141291
}