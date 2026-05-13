//Khai báo lớp phân số
#include <iostream>
#include <string>

using namespace std;

long long gcd(long long a, long long b) {
    while ( b != 0) {
        long long r = a % b;
            a = b;
            b = r;
    }
        return a;
}

class fraction {
    private:
        long long numerator, denominator;
    
    public:
        void enter() {
            cin >> numerator >> denominator;
        }

        void abbreviated() {
            long long ans = gcd(numerator, denominator);
            numerator /= ans;
            denominator /= ans;
        }

        void out() {
            cout << numerator << "/" << denominator << "\n";
        }
};

int main() {
    fraction ft;
    ft.enter();
    ft.abbreviated();
    ft.out();
    return 0;
}