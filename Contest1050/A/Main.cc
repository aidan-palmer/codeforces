#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, n, i, j;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> x >> n;
        if (n % 2 == 0) {
            ans[i] = 0;
        } else {
            ans[i] = x;
        }
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}