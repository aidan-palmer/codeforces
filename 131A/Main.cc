#include <bits/stdc++.h>
using namespace std;

bool all_upper(string s) {
    for (char c : s) {
        if (c > 90) return false;
    }
    return true;
}

bool one_lower(string s) {
    if (s[0] > 96) {
        return (s.size() > 1 && all_upper(s.substr(1))) || s.size() == 1;
    }
    return false;
}

int main(void) {
    size_t i;
    string s;
    cin >> s;
    if (all_upper(s)) {
        for (char& c : s) {
            cout << char(tolower(c));
        }
        cout << endl;
    } else if (one_lower(s)) {
        cout << char(toupper(s[0]));
        for (i = 1; i < s.size(); i++) {
            cout << char(tolower(s[i]));
        }
        cout << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}