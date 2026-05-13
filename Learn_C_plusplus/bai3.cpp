//Tính tổng giai thừa
#include<iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long sum = 0;
    long long factorial = 1;
    for ( int i = 1; i <= n; i++) {
         factorial *= i;
         sum += factorial;
    }
    cout << sum << endl;
    return 0;
}