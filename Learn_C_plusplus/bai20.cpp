//Cấu trúc thí sinh
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class thisinh {
    private:
    string name;
    string date;
    float point1, point2, point3;
    float sum;

    public:
    void solve() {
        getline(cin, name);
        getline(cin, date);
        cin >> point1 >> point2 >> point3;
    }
    void calsum() {
        sum = point1 + point2 + point3;
    }
    void out() {
        cout << name << " " << date << " " << fixed << setprecision(1) << sum;
    }
};

int main() {
    thisinh ts;
    ts.solve();
    ts.calsum();
    ts.out();
    return 0;
}
