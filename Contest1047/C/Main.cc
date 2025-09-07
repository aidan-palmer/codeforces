#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

vector<int> divisors(int n) {
    vector<int> div;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            if (n / i == i) {
                div.push_back(i);
            } else {
                div.push_back(i);
                div.push_back(n / i);
            }
        }
    }
    return div;
}

int solve(int a, int b) {
    vector<int> div = divisors(b);
    int max = -1;
    for (int k : div) {
        int sum = (a * k) + (b / k);
        if (sum % 2 == 0 && sum > max) {
            max = sum;
        }
    }
    return max;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b, i;
    cin >> t;
    int ans[t];
    for (i = 0; i < t; i++) {
        cin >> a >> b;
        ans[i] = solve(a, b);
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endn;
    }
    return 0;
}