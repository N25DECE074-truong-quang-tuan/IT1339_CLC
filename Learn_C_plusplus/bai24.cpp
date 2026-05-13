//Sao chép tệp tin
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin("PTIT1.in");
    ofstream fout("PTIT1.out");

    string line;
    while (getline(fin, line)) {
        fout << line << "\n";
    }

    fin.close();
    fout.close();

    return 0;
}