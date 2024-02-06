<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
	int N, a;
	cin >> N;
	
    for(int i = N; i >= 1 ; i--) {
		a = N % i;
		if (a == 0)
        cout << i << endl;
    }
    
    return 0;
}
=======
#include <iostream>
using namespace std;

int main()
{
	int N, a;
	cin >> N;
	
    for(int i = N; i >= 1 ; i--) {
		a = N % i;
		if (a == 0)
        cout << i << endl;
    }
    
    return 0;
}
>>>>>>> 1fe3f7e92e4bd3203c00b25dc7b53a68bc141291
