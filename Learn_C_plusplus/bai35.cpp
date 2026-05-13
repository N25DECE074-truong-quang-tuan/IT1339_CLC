//Danh sách sinh viên -2
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct SinhVien {
    string mssv, name, grade, date;
    double gpa;
};

void nhap(SinhVien ds[], int n) {
    cin.ignore();
    for(int i = 0; i < n; i++) {
        getline(cin, ds[i].name);
        cin >> ds[i].grade;
        cin >> ds[i].date;
        cin >> ds[i].gpa;
        cin.ignore();
    }
}

void codegeneration(SinhVien ds[], int n) {
    for(int i = 0; i < n; i++) {
        string num = to_string(i+1);
        while(num.size() < 3) {
            num = "0" + num;
        }
        ds[i].mssv = "B20DCCN" + num;
    }
}

void in(SinhVien ds[], int n) {
    codegeneration(ds, n);
    for(int i = 0; i < n; i++) {
        cout << ds[i].mssv  << " " << ds[i].name << " " << ds[i].grade   << " " << ds[i].date    << " " << fixed << setprecision(2) << ds[i].gpa << "\n";
    }
}

int main() {
    SinhVien ds[50];
    int n;
    cin >> n;
    nhap(ds, n);
    in(ds, n);
    return 0;
}

