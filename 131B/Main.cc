#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, i, j;
    cin >> n;
    int t[n];
    for (i = 0; i < n; i++) {
        cin >> t[i];
    }
    uint64_t c[21] = {0};
    uint64_t count = 0;
    for (i = 0; i < n; i++) {
        c[t[i] + 10]++;
    }
    for (i = 0, j = 20; i < 10; i++, j--) {
        count += c[i] * c[j];
    }
    count += c[10] * (c[10] - 1) / 2;
    cout << count << endl;
    return 0;
}