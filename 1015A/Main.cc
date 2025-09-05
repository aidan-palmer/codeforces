#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, i, j;
    cin >> t;
    int n[t];
    for (i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (i = 0; i < t; i++) {
        if (n[i] % 2 == 0) {
            cout << -1 << endl;
            continue;
        }
        cout << n[i] << " ";
        for (j = 1; j < n[i]; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}