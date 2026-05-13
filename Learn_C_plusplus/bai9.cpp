//Chênh lệch nhỏ nhất
#include <iostream>
#include <math.h>

using namespace std;

void sort(int a[], int l, int r) {
    int p = a[(l + r) / 2];
    int i = l, j = r;
    while ( i <= j) {
        while ( a[i] < p) {
            i++;
        }
        while ( a[j] > p) {
            j--;
        }
        if ( i <= j) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }
    }
    if ( l < j) {
        sort ( a, l , j);
    }
    if ( i < r) {
        sort( a, i , r);
    } 
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        int a[100000];
        for ( int i = 0; i < n; i++) {
            cin >> a[i];
        }
        sort(a , 0 , n- 1);
        int ans = a[1] - a[0];
        for ( int i = 1; i < n; i++) {
            int number = a[i] - a[i - 1];
            if (number < ans ) {
                ans = number;
            }
        }
        cout << ans << "\n";
    }
    return 0;
}