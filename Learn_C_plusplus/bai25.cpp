//Quay ma trận
#include <iostream>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    int r1  = 0, r2 = n - 1, c1 = 0, c2 = m - 1;
    while(r1 < r2 && c1 < c2) {
        int tmp = a[r1][c1];
        for(int i = r1; i < r2; i++) {
            a[i][c1] = a[i + 1][c1];
        }
        for(int i = c1; i < c2; i++) {
            a[r2][i] = a[r2][i + 1];
        }
        for(int i = r2; i > r1; i--) {
            a[i][c2] = a[i - 1][c2];
        }
        for(int i = c2; i > c1; i--) {
            a[r1][i] = a[r1][i - 1];
        }
        a[r1][c1 + 1] = tmp;
        r1++, r2--, c1++, c2--;
    }
    for( int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << a[i][j] << " ";
        }
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
