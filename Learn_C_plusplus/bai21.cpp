//Cấu trúc nhân viên
#include <iostream>
#include <string>

using namespace std;

class nhanvien {
    private:
        string manv = "00001";
        string name;
        string sex;
        string date;
        string address;
        string taxcode;
        string contractsigningdate;
    
    public:
        void enter() {
            getline(cin, name);
            getline(cin, sex);
            getline(cin, date);
            getline(cin, address);
            getline(cin, taxcode);
            getline(cin, contractsigningdate);
        }

        void out() {
            cout << manv << " " << name << " " << sex << " " << date << " " << address << " " << taxcode << " " << contractsigningdate << "\n";

        }
};

int main() {
    nhanvien nv;
    nv.enter();
    nv.out();
    return 0;
}