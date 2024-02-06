<<<<<<< HEAD
#include <iostream>
using namespace std;

int main() {
    double N;
    int F, C, bilbul;
    
    cin >> N;
    bilbul = N;
    
    if (N == bilbul) {
        F = N;
        C = N;
    }
    else if (N > 0) {
        F = N;
        C = N + 1; 
    } else {
        F = N - 1;
        C = N;
    }
    
    cout << F << " " << C;

    return 0;
}
=======
#include <iostream>
using namespace std;

int main() {
    double N;
    int F, C, bilbul;
    
    cin >> N;
    bilbul = N;
    
    if (N == bilbul) {
        F = N;
        C = N;
    }
    else if (N > 0) {
        F = N;
        C = N + 1; 
    } else {
        F = N - 1;
        C = N;
    }
    
    cout << F << " " << C;

    return 0;
}
>>>>>>> 1fe3f7e92e4bd3203c00b25dc7b53a68bc141291
