//Biến đổi nhị phân
#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a[100][100];
    bool row[100] = {false};
    bool colum[100] = {false};

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {
                row[i] = true;
                colum[j] = true;
            }
        }
    }

    for( int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ( row[i] || colum [j]) {
                a[i][j] = 1;
            }
        }
    }

    for( int i = 0; i < n; i++) {
        for ( int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}