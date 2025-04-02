#include <bits/stdc++.h>
using namespace std;

bool valid(int* a, int n, int i, int j) {
    if (j < n - 1 && i > 0) {
        return a[i] <= a[j + 1] && a[j] >= a[i - 1];
    } else if (j < n - 1) {
        return a[i] <= a[j + 1];
    } else if (i > 0) {
        return a[j] >= a[i - 1];
    } else if (i == 0 && j == n - 1) {
        return true;
    }
    return false;
}

int main(void) {
    int n, i, j, k;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (i = 0; i < n - 1; i++) {
        j = i;
        while (j < n - 1 && a[j + 1] < a[j]) {
            j++;
        }
        if (j > i) {
            bool asc = true;
            for (k = j; k < n - 1; k++) {
                if (a[k] > a[k + 1]) {
                    asc = false;
                    break;
                }
            }
            if (asc && valid(a, n, i, j)) {
                cout << "yes\n" << i + 1 << " " << j + 1 << endl;
                return 0;
                
            } else {
                cout << "no" << endl;
                return 0;
            }
        }
    }
    cout << "yes\n" << n << " " << n << endl;
    return 0;
}