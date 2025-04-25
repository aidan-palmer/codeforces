#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j, k, x;
    cin >> t;
    vector<int> ans[t];
    for (i = 0; i < t; i++) {
        cin >> n >> x;
        vector<int> p(n);
        int y = x;
        if (x == n) {
            y--;
        }
        p[n - 1] = y;
        for (j = n - 2, k = n - 1; j >= 0; j--, k--) {
            if (k != y) {
                p[j] = k;
            } else {
                p[j] = --k;
            }
        }
        ans[i] = p;
    }
    for (i = 0; i < t; i++) {
        for (int q : ans[i]) {
            cout << q << " ";
        }
        cout << endn;
    }
    return 0;
}