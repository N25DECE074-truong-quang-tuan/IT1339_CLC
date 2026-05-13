//Ước số nguyên tố
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long t;
        cin >> t; 
        if ( t < 2 ) {
            cout << t;
            continue;
        }
        if ( t % 2 == 0) {
            //cout << 2 << " ";
            while ( t % 2 == 0) {
                cout << 2 << " ";
                t /= 2;
            }
        }
        for ( long long i = 3; i <= sqrt(t); i += 2) {
            if ( t % i == 0) {
                cout << i << " ";
                    t /= i;
                    i -= 2;
            }
        }
        if ( t > 1) {
            cout << t << "\n";
        }
    }
    return 0;
}