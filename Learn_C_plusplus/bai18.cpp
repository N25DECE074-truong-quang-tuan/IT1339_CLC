//loại bỏ nguyên âm
#include <iostream>
#include <string>

using namespace std;

bool vowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'u' || c == 'o' || c == 'y');
}

int main() {
    string s;
    cin >> s;
    string ans = "";
    for( char c : s) {
        if (!vowel(c)) {
            ans += '.';
            ans += char(tolower(c));
        }
    }
    cout << ans;
}