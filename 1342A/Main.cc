#include <bits/stdc++.h>
using namespace std;

uint64_t abs_diff(uint64_t x, uint64_t y) {
    if (x > y) {
        return x - y;
    }
    return y - x;
}

uint64_t solve(uint64_t x, uint64_t y, uint64_t a, uint64_t b) {
    if (a * 2 < b) {
        return (x + y) * a;
    }
    uint64_t price = 0;
    uint64_t min_val = min(x, y);
    price += min_val * b;
    price += abs_diff(x, y) * a;
    return price;
}

int main(void) {
    uint64_t t, x, y, a, b, i;
    cin >> t;
    uint64_t ans[t];
    for (i = 0; i < t; i++) {
        cin >> x >> y >> a >> b;
        ans[i] = solve(x, y, a, b);
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}