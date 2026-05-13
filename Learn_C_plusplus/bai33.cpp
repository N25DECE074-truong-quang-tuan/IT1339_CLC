//Sắp xếp xen kẽ -2
#include <iostream>
using namespace std;

void Sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int a[1001];
        for (int i = 0; i < n; i++) cin >> a[i];

        Sort(a, n);  

        int ans[1001];
        int l = 0, r = n - 1, idx = 0;

        while (l <= r) {
            ans[idx++] = a[r--];  
            if (l <= r)
                ans[idx++] = a[l++];
        }

        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }

    return 0;
}