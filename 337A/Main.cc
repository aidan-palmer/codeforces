#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m, i, j, diff, min = INT32_MAX;
    cin >> n >> m;
    int f[m];
    for (i = 0; i < m; i++) {
        cin >> f[i];
    }
    sort(f, f + m);
    i = 0;
    j = n - 1;
    while (j < m) {
        diff = f[j] - f[i];
        if (diff < min) {
            min = diff;
        }
        i++;
        j++;
    }
    cout << min << endl;
    return 0;
}