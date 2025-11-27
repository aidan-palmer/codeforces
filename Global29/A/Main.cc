#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int sim(int x, int y) {
    int sum = x + y;
    int k = 1;
    while (true) {
        int s = k * (k + 1) / 2;
        if (s > sum) {
            return -1;
        }
        if (s < sum) {
            k++;
            continue;
        }
        if ((s - sum) % 2 != 0) {
            k++;
            continue;
        }
        int i;
        int sum_i = 0; 
        int sum_j = 0;
        for (i = 1; i <= k; i += 2) {
            sum_i += i;
        }
        for (i = 2; i <= k; i += 2) {
            sum_j += i;
        }
        if (x <= sum_i && y <= sum_j) {
            return k;
        } else {
            k++;
        }
    }
    return -1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, i, x, y;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> x >> y;
        if (x < y) {
            ans[i] = 2;
        } else if (x == y) {
            ans[i] = -1;
        } else {
            ans[i] = sim(x, y);
        }
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}