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
