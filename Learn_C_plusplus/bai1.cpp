//Tính tổng 1 đến n
#include <iostream>

using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Nhập n: ";
    cin >> n;
    for ( int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Tổng = " << sum << endl;
    return 0;
}