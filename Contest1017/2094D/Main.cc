#include <bits/stdc++.h>
using namespace std;
/**
 * Wrong answer on 2nd test case
 */

bool heard(string p, string s) {
    size_t i = 0, j = 0;
    while (i < p.size() && j < s.size()) {
        if (p[i] != s[j]) {
            return false;
        } else if (j + 1 < s.size() && s[j + 1] == s[j]) {
            j += 2;
        } else {
            j++;
        }
        i++;
    }
    return i == p.size() && j == s.size();
}

int main(void) {
    int t, i;
    cin >> t;
    bool ans[t];
    string p;
    string s;
    for (i = 0; i < t; i++) {
        cin >> p >> s;
        ans[i] = heard(p, s);
    }
    for (i = 0; i < t; i++) {
        if (ans[i]) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}