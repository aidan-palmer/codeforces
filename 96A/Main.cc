#include <bits/stdc++.h>

using namespace std;

bool is_dangerous(const string& s) {
    int z_count = 0;
    int o_count = 0;
    for (char c : s) {
        if (z_count >= 7 || o_count >= 7) {
            return true;
        }
        if (c == '0') {
            o_count = 0;
            z_count++;
        } else {
            z_count = 0;
            o_count++;
        }
    }
    return z_count >= 7 || o_count >= 7;
}

int main(void) {
    string s;
    cin >> s;
    if (is_dangerous(s)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}