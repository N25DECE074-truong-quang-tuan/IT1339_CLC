//Liệt kê số nguyên tố -1
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << "\n";
    if ( b < 2) {
        cout << "No prime";
    } else {
        if ( a < 2 ) {
            a = 2;
        }
    }
    for ( int y = a; y <= b; y++) {
        int flat = 0;
        if ( y == 2 || y == 3 || y == 5 || y == 7) {
            cout << y << " ";
        }
        for ( int i = 2; i <= sqrt(b); i++) {
             if ( y % i == 0) {
                flat = 1;
             }
        }
        if ( flat == 0) {
            cout << y << " ";
        }
    }
    return 0;
}