//Danh sách sinh viên
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class sinhvien {
    private:
        string mssv, name, grade, date;
        float GPA;

    public:
        void setMaSV(int stt) {
            mssv = "B20DCCN";
            if (stt < 10) {
                mssv += "00";
            } else if (stt < 100) {
                mssv += "0";
            }
            mssv += to_string(stt);
        }

        void solve() {
            getline(cin, name);
            getline(cin, grade);
            getline(cin, date);
            cin >> GPA;
            cin.ignore();
        }

        void inRa() {
            cout << mssv  << " " << name  << " " << grade   << " " << date  << " " << fixed << setprecision(2) << GPA << "\n";
        }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    sinhvien ds[100];

    for (int i = 0; i < n; i++) {
        ds[i].setMaSV(i + 1);
        ds[i].solve();
    }

    for (int i = 0; i < n; i++) {
        ds[i].inRa();
    }

    return 0;
}