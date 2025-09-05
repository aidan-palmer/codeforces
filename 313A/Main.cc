#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n;
    cin >> n;
    if (n < 0) {
        if (n < -9) {
            string s = to_string(n);
            string a = s.substr(0, s.size() - 1);
            string b = s.substr(0, s.size() - 2) + s[s.size() - 1];
            int x = stoi(a);
            int y = stoi(b);
            cout << max(x, y) << endl;
        } else {
            cout << 0 << endl;
        }
    } else {
        cout << n << endl;
    }

    return 0;
}