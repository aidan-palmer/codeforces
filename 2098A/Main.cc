#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

string solve(string s) {
    string r;
    list<int> digits;
    for (int i = 0; i < 10; i++) {
        digits.push_back(s[i] - '0');
    }
    for (int i = 0; i < 10; i++) {
        int smallest = 10;
        list<int>::iterator small_it;
        for (list<int>::iterator it = digits.begin(); it != digits.end(); ++it) {
            if (*it >= 10 - (i + 1) && *it < smallest) {
                smallest = *it;
                small_it = it;
            }
        }
        r += to_string(smallest);
        digits.erase(small_it);
    }
    return r;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i;
    cin >> t;
    string s;
    string ans[t];
    for (i = 0; i < t; i++) {
        cin >> s;
        ans[i] = solve(s);
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}