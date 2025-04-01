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
        } else {
            for (j = n[i]; j > 0; j--) {
                cout << j << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}