//Quay vòng dãy số 1
#include <iostream>

using namespace std;

void solve() {
    int n, b;
    cin >> n >> b;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = b; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 0; i < b; i++) {
        cout << a[i] << " ";
    } 
    delete[] a;
};

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}