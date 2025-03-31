#include <bits/stdc++.h>
using namespace std;

int main(void) {
    unsigned long long n, k, ans, odd;
    cin >> n >> k;
    odd = (n + 1) / 2;
    if (k <= odd) {
        ans = 2 * k - 1;
    } else {
        ans = 2 * (k - odd);
    }
    cout << ans << endl;
    return 0;
}