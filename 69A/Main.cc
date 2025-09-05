#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j;
    cin >> n;
    int matrix[n][3];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }
    for (j = 0; j < 3; j++) {
        int sum = 0;
        for (i = 0; i < n; i++) {
            sum += matrix[i][j];
        }
        if (sum != 0) {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    return 0;
}