#include <bits/stdc++.h>
using namespace std;

vector<int> solve(int n, string s) {
    int cnt = count(s.begin(), s.end(), '<');
    vector<int> a(n);
    a[0] = cnt + 1;
    int low  = cnt;
    int high = cnt + 2;
    for (int i = 1; i < n; ++i) {
        if (s[i - 1] == '<') {
            a[i] = low--;
        } else {
            a[i] = high++;
        }
    }
    return a;
}

int main(void) {
    int t, n, i;
    string s;
    cin >> t;
    vector<int> results[t];
    for (i = 0; i < t; i++) {
        cin >> n >> s;
        results[i] = solve(n, s);
    }
    for (i = 0; i < t; i++) {
        for (int x : results[i]) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}