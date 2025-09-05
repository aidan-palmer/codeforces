#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n, i, j, cnt;
    map<int, int> date = {{0, 3}, {1, 1}, {2, 2}, {3, 1}, {5, 1}};
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> n;
        int line[n];
        cnt = 0;
        ans[i] = 0;
        map<int, int> m = {{0, 0}, {1, 0}, {2, 0}, {3, 0}, {5, 0}};
        for (j = 0; j < n; j++) {
            cin >> line[j];
        }
        for (j = 0; j < n; j++) {
            ans[i]++;
            if (date.count(line[j]) && m[line[j]] < date[line[j]]) {
                m[line[j]]++;
                cnt++;
                if (cnt == 8) {
                    break;
                }
            }
        }
        if (cnt < 8) {
            ans[i] = 0;
        }
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}