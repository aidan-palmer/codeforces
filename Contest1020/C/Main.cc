#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

/**
 * wrong answer on test case 2
 */

int num_comp(int* a, int* b, int n, int k) {
    int count = 0;
    int comp = -1;
    for (int i = 0; i < n; i++) {
        if (a[i] != -1 && b[i] != -1) {
            int add = a[i] + b[i];
            if (comp != -1 && add != comp) {
                return 0;
            } else if (comp == -1) {
                comp = add;
            }
        } else {
            count++;
            if (comp != -1 && (a[i] == -1 || b[i] == -1)) {
                int num = a[i] + b[i] + 1;
                if (num > comp || num + k < comp) {
                    return 0;
                }
            }
        }
    }
    if (count == n) {
        int min = k + 1;
        int max = -1;
        for (int i = 0; i < n; i++) {
            int num = a[i] + b[i] + 1;
            if (num < min) {
                min = num;
            }
            if (num > max) {
                max = num;
            }
        }
        return min + k - max + 1; // wrong
    }
    return 1;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j, k;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> n >> k;
        int a[n];
        int b[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        for (j = 0; j < n; j++) {
            cin >> b[j];
        }
        int comp = num_comp(a, b, n, k);
        ans[i] = comp;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}