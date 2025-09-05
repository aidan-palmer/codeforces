#include <bits/stdc++.h>
using namespace std;

bool is_vowel(char c) {
    return c == 'a' || c == 'o' || c == 'y' || c == 'e' || c == 'u' || c == 'i';
}

void lower(string& s) {
    for (char& c : s) {
        c = tolower(c);
    }
}

int main(void) {
    string s;
    cin >> s;
    int n = s.size();
    lower(s);
    for (int i = 0; i < n; i++) {
        if (!is_vowel(s[i])) {
            cout << '.' << s[i];
        }
    }
    cout << endl;
    return 0;
}