//Sắp xếp chữ số
#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        bool digit[10] = {false};
        for(int i = 0; i < n; i++) {
            string number;
            cin >> number;
            for (char c : number) {
                digit[c - '0'] = true;
            }
        }
        for( int d = 0; d <= 9; d++) {
            if(digit[d]) {
                cout << d << " ";
            }
        }
    }
    cout << "\n";
    return 0;
}