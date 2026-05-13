//Chữ hoa - Chữ thường
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    for ( int i = 0; i < n; i++) {
        char c;
        cin >> c;
        if ( c >= 'a' && c <= 'z' ) {
            cout << (char)( c - 'a' + 'A') << endl;
        } else if ( c >= 'A' && c <= 'Z') {
            cout << (char)( c - 'A' + 'Z') << endl;
        }
    }
    return 0;
}