//Số nhỏ nhất chưa xuất hiện
#include <iostream>
#include <math.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    int *a = new int [n];
    for ( int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for ( int i = 0; i < n - 1; i++) {
        for ( int j =  i + 1; j < n; j++) {
            if( a[i] > a[j] ) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    int ans = 1;
    for ( int i = 0; i < n; i++) {
        if( a[i] == ans ) {
            ans++;
        }
    }
        cout << ans << "\n";

        delete[] a;
}

int main() {
    int t;
    cin >> t;
    while( t-- ) {
        solve();
    }
    return 0;
}