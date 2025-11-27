#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, a, b;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> a >> b;
        if (a == b) {
            ans[i] = 0;
        } else if (a % b == 0 || b % a == 0) {
            ans[i] = 1;
        } else {
            ans[i] = 2;
        }
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}