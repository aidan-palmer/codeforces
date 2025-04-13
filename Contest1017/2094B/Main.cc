#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n, m, l, r, i;
    cin >> t;
    int ans[t][2];
    for (i = 0; i < t; i++) {
        cin >> n >> m >> l >> r;
        int diff = n - m;
        while (diff > 0) {
            if (r > 0) {
                r--;
            } else {
                l++;
            }
            diff--;
        }
        ans[i][0] = l;
        ans[i][1] = r;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i][0] << " " << ans[i][1] << endl;
    }
    return 0;
}