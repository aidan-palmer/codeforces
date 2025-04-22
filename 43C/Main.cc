#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

bool is_lucky(int x, int y) {
    string a = to_string(x) + to_string(y);
    string b = to_string(y) + to_string(x);
    ll c = stoll(a);
    ll d = stoll(b);
    return c % 3 == 0 || d % 3 == 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    int a[n];
    bool used[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        used[i] = false;
    }
    int count = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if ((!used[i]) && (!used[j]) && is_lucky(a[i], a[j])) {
                count++;
                used[i] = true;
                used[j] = true;
                break;
            }
        }
    }
    cout << count << endn;
    return 0;
}