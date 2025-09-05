#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n, m, i, j, k, l;
    cin >> t;
    vector<vector<int>> ans;
    for (i = 0; i < t; i++) {
        cin >> n >> m;
        int game[n][m];
        for (j = 0; j < n; j++) {
            for (k = 0; k < m; k++) {
                cin >> game[j][k];
            }
        }
        vector<int> order(n);
        for (j = 0; j < n; j++) {
            sort(game[j], game[j] + m);
            order[game[j][0]] = j;
        }
        int card = n;
        bool no_ans = false;
        for (l = 1; l < m; l++) {
            for (j = 0; j < n; j++) {
                if (game[order[j]][l] != card) {
                    vector<int> none;
                    none.push_back(-2);
                    ans.push_back(none);
                    no_ans = true;
                    break;
                }
                card++;
            }
            if (no_ans) {
                break;
            }
        }
        if (!no_ans) {
            ans.push_back(order);
        }
    }
    for (i = 0; i < t; i++) {
        for (j = 0; j < int(ans[i].size()); j++) {
            cout << ans[i][j] + 1 << " ";
        }
        cout << endl;
    }
    return 0;
}