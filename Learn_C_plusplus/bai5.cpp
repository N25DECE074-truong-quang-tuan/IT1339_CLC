//Số may mắn
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        long long a;
        cin >> a;
        if( a % 100 == 86 ) {
            cout << 1 << "\n";
        } else {
            cout << 0;
        }
    }
    return 0;
}