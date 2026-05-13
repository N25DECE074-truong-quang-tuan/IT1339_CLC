//Biến của ma trận
#include <iostream>

using namespace std;

void solve() {
    int t;
    cin >> t;
    int a[100][100];
    for (int i = 0; i < t; i++) {
        for ( int j = 0; j < t; j++) {
            cin >> a[i][j];
        }
    }
    
    for (int i = 0; i < t; i++) {
        for ( int j = 0; j < t; j++) {
            if (i == 0 || i == t - 1 || j == 0 || j == t - 1 ) {
                cout << a[i][j] << " ";
            } else {
                cout << "  ";
            }
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}