//Đổi chỗ chữ số
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int n = s.size();
        int i = n - 1;
        while (i > 0 && s[i] >= s[i - 1]) {
            i--;
        }
        if (i == 0) {
            cout << -1 << "\n";
            continue;
        }
        int pos = -1;
        int best = '0';
        for( int j = i; j < n; j++) {
            if(s[j] < s[i - 1] && s[j] >= best) {
                best = s[j];
                pos = j;
            }
        }
        if( pos == -1) {
            cout << -1 << "\n";
        } else {
            swap(s[i - 1], s[pos]);
            cout << s << "\n";
        }
    }
    return 0;
}