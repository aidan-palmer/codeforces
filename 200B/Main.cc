#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i;
    cin >> n;
    double sum = 0;
    for (i = 0; i < n; i++) {
        cin >> t;
        sum += t;
    }
    sum /= n;
    cout << sum << endl;
    return 0;
}