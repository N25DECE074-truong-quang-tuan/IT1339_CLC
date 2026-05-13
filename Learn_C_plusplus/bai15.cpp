//Đếm số phần tử lặp lại
#include <iostream>

using namespace std;

int solve(int a[], int n) {
    int *b = new int[10000001];
    for(int i = 0; i < n; i++) {
        b[a[i]]++;
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        if(b[a[i]] > 1) {
            count++;
        }
    }

    delete[] b;
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int c;
        cin >> c;
        int *d = new int[c];
        for(int i = 0; i < c; i++) {
            cin >> d[i];
        }
        cout << solve(d, c) << "\n";
        delete[] d;
    }
    return 0;
}