//Hợp và giao của hai dãy số -2
#include <iostream>

using namespace std;

void sort(int arr[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        int a[100001], b[100001];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for(int i = 0; i < m; i++) {
            cin >> b[i];
        }

        sort (a, n);
        sort (b, m);

        int i = 0, j = 0;
        bool first = true;
        while(i < n && j < m) {
            int val;
            if(a[i] < b[j]) {
                val = a[i];
                i++;
            } else if (a[i] > b[j]) {
                val = b[j];
                j++;
            } else {
                val = a[i];
                i++;
                j++;
            }
            if(first) {
                cout << val;
                first = false;
            } else {
                cout << " " << val;
            }
        }
        while ( i < n) {
            cout << " " << a[i];
            i++;
        }
        while ( j < m) {
            cout << " " << b[j];
            j++;
        }
        cout << endl;
        i = 0; j = 0;
        bool first2 = true;
        while(i < n && j < m) {
            if(a[i] < b[j]) {
                i++;
            } else if (a[i] > b[j]) {
                j++;
            } else {
                if(first2) {
                    cout << a[i];
                    first2 = false;
                } else {
                    cout << " " << a[i];
                }
                i++;
                j++;
            }
        }
        cout << endl;
    }
    return 0;
}