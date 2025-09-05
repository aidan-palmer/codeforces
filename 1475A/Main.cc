#include <bits/stdc++.h>
using namespace std;

/**
 * Always use fixed-width integers with large numbers!
 * I think Codeforces' test server is 32-bit
 */

bool has_odd(uint64_t n) {
    while (n % 2 == 0) {
        n /= 2;
    }
    return n > 1;
}

int main(void) {
    int t, i;
    cin >> t;
    uint64_t n[t];
    for (i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (i = 0; i < t; i++) {
        if (has_odd(n[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}