#include <bits/stdc++.h>
using namespace std;

int solve(int* a, int n) {
    sort(a, a + n);
    int x = a[0];
    int y = a[n - 1];
    return y - x;
}

int main(void) {
    int t, n, i, j;
    cin >> t;
    int sol[t];
    for (i = 0; i < t; i++) {
        cin >> n;
        int a[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        sol[i] = solve(a, n);
    }
    for (i = 0; i < t; i++) {
        cout << sol[i] << endl;
    }
    return 0;
}