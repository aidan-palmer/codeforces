#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, x, y, i, j;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> n >> m >> x >> y;
        int a[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        int b[m];
        for (j = 0; j < m; j++) {
            cin >> b[j];
        }
        int count = 0;
        for (j = 0; j < n; j++) {
            if (a[j] < y) {
                count++;
            } else {
                break;
            }
        }
        for (j = 0; j < m; j++) {
            if (b[j] < x) {
                count++;
            } else {
                break;
            }
        }
        ans[i] = count;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}