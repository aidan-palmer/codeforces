#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, i, j;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> n >> m;
        int a[n];
        int b[n];
        for (j = 0; j < n; j++) {
            cin >> a[j] >> b[j];
        }
        int points = 0;
        bool side = 0;
        int time = 0;
        for (j = 0; j < n; j++) {
            while (time < a[j]) {
                side = !side;
                time++;
                points++;
                //cout << points << endl;
            }
            if (side != b[j]) {
                side = !side;
                points--;
                //cout << points << endl;
            }
        }
        if (time < m) {
            points += m - time;
        }
        ans[i] = points;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}