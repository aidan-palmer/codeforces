#include <bits/stdc++.h>
using namespace std;

void to_lower(string& s) {
    for (size_t i = 0; i < s.size(); i++) {
        s[i] = tolower(s[i]);
    }
}

int main(void) {
    string a, b;
    cin >> a >> b;
    to_lower(a);
    to_lower(b);
    if (a < b) {
        cout << -1 << endl;
    } else if (a > b) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}