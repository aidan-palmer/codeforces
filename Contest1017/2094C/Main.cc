#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n, i, j, k;
    cin >> t;
    vector<int> ans[t];
    for (i = 0; i < t; i++) {
        cin >> n;
        vector<int> sol(2 * n);
        set<int> uniq;
        int tmp;
        for (j = 0; j < n; j++) {
            for (k = 0; k < n; k++) {
                cin >> tmp;
                sol[j + k + 1] = tmp;
                uniq.emplace(tmp);
            }
        }
        for (j = 1; j <= 2 * n; j++) {
            if (uniq.count(j) == 0) {
                sol[0] = j;
                break;
            }
        }
        ans[i] = sol;
    }
    for (i = 0; i < t; i++) {
        for (j = 0; j < int(ans[i].size()); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}