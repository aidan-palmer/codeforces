#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

bool is_valid(vector<int> p, vector<int> q, int n) {
    for (int i = 0; i < n - 1; i++) {
        int x = p[i] + q[i];
        int y = p[i + 1] + q[i + 1];
        if (gcd(x, y) < 3) {
            return false;
        }
    }
    return true;
}

vector<int> solve(vector<int> p, int n) {
    vector<int> q(n);
    for (int i = 0; i < n; i++) {
        q[i] = p[i];
    }
    sort(q.begin(), q.end());
    do {
        if (is_valid(p, q, n)) {
            return q;
        }
    } while (next_permutation(q.begin(), q.end()));
    return q;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j;
    cin >> t;
    vector<int> ans[t];
    for (i = 0; i < t; i++) {
        cin >> n;
        vector<int> p(n);
        for (j = 0; j < n; j++) {
            cin >> p[j];
        }
        ans[i] = solve(p, n);
    }
    for (i = 0; i < t; i++) {
        for (j = 0; j < ans[i].size(); j++) {
            cout << ans[i][j] << " ";
        }
        cout << endn;
    }
    return 0;
}