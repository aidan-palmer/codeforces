#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int64_t t, n, i, j, k, q;
    cin >> t;
    int64_t results[t];
    for (i = 0; i < t; i++) {
        cin >> n >> k >> q;
        int a[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        int64_t len = 0;
        int64_t total = 0;
        for (j = 0; j < n; j++) {
            if (a[j] <= q) {
                len++;
            } else {
                if (len >= k) {
                    total += (len - k + 1) * (len - k + 2) / 2;
                }
                len = 0;
            }
        }
        if (len >= k) {
            total += (len - k + 1) * (len - k + 2) / 2;
        }
        results[i] = total;
    }
    for (i = 0; i < t; i++) {
        cout << results[i] << '\n';
    }
    return 0;
}

/**
 * Need to get better at combinatorics--struggled with this one.
 */