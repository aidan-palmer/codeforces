#include <bits/stdc++.h>
using namespace std;

int fib_count(int* a) {
    int count = 0;
    for (int i = 0; i < 3; i++) {
        if (a[i] + a[i + 1] == a[i + 2]) {
            count++;
        }
    }
    return count;
}

int main(void) {
    int t, i, j;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        int a[5];
        for (j = 0; j < 2; j++) {
            cin >> a[j];
        }
        for (j = 3; j < 5; j++) {
            cin >> a[j];
        }
        int max = 0;
        for (j = -100; j < 101; j++) {
            a[2] = j;
            int c = fib_count(a);
            if (c > max) {
                max = c;
            }
        }
        ans[i] = max;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}