//Tính tổng hai đối tượng phân số
#include <iostream>

using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
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
        fraction(long long tu = 0, long long mau = 1) {
            numerator = tu;
            denominator = mau;
        }

        void enter() {
            cin >> numerator >> denominator;
        }

        void simplyfy() {
            long long ans = gcd(numerator, denominator);
            numerator /= ans;
            denominator /= ans;
        }

        fraction add(const fraction &other) {
            fraction result;
            result.numerator = numerator * other.denominator + other.numerator * denominator;
            result.denominator = denominator * other.denominator;
            result.simplyfy();
            return result;
        }

        void out() {
            cout << numerator << "/" << denominator << "\n";
        }
};

int main() {
    fraction ft1, ft2;
    ft1.enter();
    ft2.enter();
    fraction sum = ft1.add(ft2);
    sum.out();
    return 0;
}