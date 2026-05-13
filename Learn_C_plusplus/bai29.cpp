//Tính tổng các số trong xâu
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        getline(cin, s);
        s = s + "a";
        int number = 0;
        int sum = 0;
        for(int i = 0; i < s.size(); i++) {
            if(isdigit(s[i])) {
                number = number * 10 + (s[i] - '0');
            } else {
                sum += number;
                number = 0;
            }

        }
        cout << sum << "\n";
    }
}