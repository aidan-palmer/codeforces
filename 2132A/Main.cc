#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, i, j;
    cin >> t;
    string ans[t];
    for (i = 0; i < t; i++) {
        cin >> n;
        string a, b, c;
        cin >> a;
        cin >> m;
        cin >> b;
        cin >> c;
        for (j = 0; j < m; j++) {
            if (c[j] == 'V') {
                a = b[j] + a;
            } else {
                a += b[j];
            }
        }
        ans[i] = a;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}