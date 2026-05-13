//Đầu cuối giống nhau
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int a[26] = {0};
        for(char c : s) {
            a[c - 'a']++;
        }
        long long ans = 0;
        for(int i = 0; i < 26; i++) {
            if(a[i] > 0) {
                ans += 1ll * a[i] * (a[i] + 1) / 2;
            }
        }
        cout << ans << "\n";
    }
}