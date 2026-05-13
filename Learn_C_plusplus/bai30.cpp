//Tách chữ số
#include <iostream>
#include <string>

using namespace std;

void sort(string& s) {
    int n = s.size();
    for(int i = 0; i < n -1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(s[j] > s[j + 1]) {
                swap(s[j], s[j + 1]);
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while(t--) {
        string s;
        getline(cin, s);
        string letter = "";
        int sum = 0;
        for( char c : s) {
            if(c >= 'A' && c <= 'Z') {
                letter += c;
            } else if (c >= '0' && c <= '9') {
                sum += (c - '0');
            }
        }
        sort(letter);
        cout << letter << sum << endl;
    }
    return 0;
}