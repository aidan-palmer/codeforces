#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, j, k, x;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> k >> x;
        ans[i] = x;
        for (j = 0; j < k; j++) {
            ans[i] *= 2;
        }
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}