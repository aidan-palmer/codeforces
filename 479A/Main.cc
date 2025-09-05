#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int i, a, b, c;
    cin >> a >> b >> c;
    int n = 4;
    int x[n] = {a * b * c, a * (b + c), (a + b) * c, a + b + c};
    int max = x[0];
    for (i = 1; i < n; i++) {
        if (x[i] > max) {
            max = x[i];
        }
    }
    cout << max << endl;
    return 0;
}