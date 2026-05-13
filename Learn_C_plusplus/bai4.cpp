//Cân bằng chẵn lẻ
#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    // long long start = 1;
    // for ( int i = 1; i < n; i++) {
    //     start *= 10;
    // }
    // long long end = start * 10 - 1;
    //dùng pow để tính số mũ
    // cú pháp pow (x,y)
    long long start = pow(10, n - 1);
    long long end = pow(10, n);
    int count = 0;
    for (long long i = start; i < end; i++) {
        long long t = i;
        int even = 0, odd = 0;
        while (t > 0) {
            int d = t % 10;
            if ( d % 2 == 0) {
                even++;
            } else {
                odd++;
            }
            t /= 10;
        }
        if ( even == odd) {
            cout << i << " ";
            count++;
            if ( count % 10 == 0) {
                cout << endl;
            }
        } 
    }
    return 0;
}