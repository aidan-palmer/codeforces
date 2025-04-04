#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, i, j, k;
    cin >> n;
    vector<vector<int>> digits;
    for (i = 0; i < n + 1; i++) {
        vector<int> line;
        for (j = 0; j < i + 1; j++) {
            line.push_back(j);
        }
        for (j = j - 2; j >= 0; j--) {
            line.push_back(j);
        }
        digits.push_back(line);
    }
    for (i = n - 1; i >= 0; i--) {
        digits.push_back(digits[i]);
    }
    for (i = n, k = 0; i >= 0; i--, k++) {
        for (j = 0; j < i * 2; j++) {
            cout << ' ';
        }
        for (j = 0; j < k * 2 + 1; j++) {
            if (j == k * 2) {
                cout << digits[k][j];
            } else {
                cout << digits[k][j] << ' ';
            }
        }
        cout << endl;
    }
    for (i = 1, k = n + 1; i < n + 1; i++, k++) {
        for (j = 0; j < i * 2; j++) {
            cout << ' ';
        }
        for (j = 0; j < int(digits[k].size()); j++) {
            if (j == int(digits[k].size()) - 1) {
                cout << digits[k][j];
            } else {
                cout << digits[k][j] << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}