#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j;
    cin >> t;
    string s;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> n >> s;
        string a[n];
        for (j = 0; j < n; j++) {
            a[j] = s;
            if (a[j][j] == '0') {
                a[j][j] = '1';
            } else {
                a[j][j] = '0';
            }
        }
        int count = 0;
        for (j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                if (a[j][k] == '1') {
                    count++;
                }
            }
        }
        ans[i] = count;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}