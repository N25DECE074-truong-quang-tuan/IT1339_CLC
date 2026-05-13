//Liệt kê số có ba ước số
#include <iostream>
#include <math.h>

using namespace std;

bool check(int n) {
    if ( n < 2) return false;
    for ( int i = 2; i <= sqrt(n); i++) {
        if ( n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    while ( n-- ) {
        long long t;
        cin >> t;
        int limit = sqrt(t);
        for ( int y = 2; y <= limit; y++) {
            if (check(y)) {
                    cout << 1LL * y * y << " ";
                }
            }
        cout << "\n";
    }
    return 0;
}