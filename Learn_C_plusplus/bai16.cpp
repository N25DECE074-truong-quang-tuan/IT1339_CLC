//Nhỏ nhất - lớn nhất
#include <iostream> 
#include <string>

using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    if ((s == 0 && m > 1) || s > 9 * m) {
        cout << "-1 -1\n";
        return 0;
    }
    if ( s == 0 && m == 1) {
        cout << "0 0\n";
        return 0;
    }

    int sum = s;
    string maxnumber = "";
    for (int i = 0; i < m; i++) {
        int digit = min(9, sum);
        maxnumber += char(digit + '0');
        sum -= digit;
    }

    sum = s;
    string minnumber(m, '0');
    for (int i = 0; i < m; i++) {
        for (int d = (i == 0 ? 1 : 0); d <= 9; d++) {
            if (sum - d >= 0 && sum - d <= 9 * (m - i - 1)) {
                minnumber[i] = char(d + '0');
                sum -= d;
                break;
            }
        }
    }

    cout << minnumber << " " << maxnumber;
    return 0;
}