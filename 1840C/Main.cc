#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j, k, q, l;
    cin >> t;
    for (i = 0; i < t; i++) {
        cin >> n >> k >> q;
        int a[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        vector<int> dates;
        j = 0, l = 0;
        while (j < n) {
            if (a[j] > q) {
                dates.push_back(j - l);
                l = j + 1;
            }
            j++;
        }

    }

    return 0;
}