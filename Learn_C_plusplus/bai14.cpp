//Liệt kê số khác nhau
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    int a[100];
    bool m[1001] = {0};
    for(int i = 0; i < t; i++) {
        cin >> a[i];
        m[a[i]] = true;
    }

    for(int i = 1; i < 1000; i++) {
        if (m[i]) {
            cout << i << " ";
        }
    }
    return 0;
}