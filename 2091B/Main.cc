#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, n, x, i, j, cnt;
    cin >> t;
    int result[t];
    for (i = 0; i < t; i++) {
        cin >> n >> x;
        int a[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        sort(a, a + n, greater<int>());
        result[i] = 0;
        for (j = 0, cnt = 1; j < n; j++, cnt++) {
            if (a[j] * cnt >= x) {
                result[i]++;
                cnt = 0;
            }
        }        
    }
    for (i = 0; i < t; i++) {
        cout << result[i] << endl;
    }
    return 0;
}