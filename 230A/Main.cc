#include <bits/stdc++.h>
using namespace std;

bool can_defeat(pair<int, int>* dragons, int s, int n) {
    for (int i = 0; i < n; i++) {
        if (s > dragons[i].first) {
            s += dragons[i].second;
        } else {
            return false;
        }
    }
    return true;
}

int main(void) {
    int s, n, i;
    cin >> s >> n;
    pair<int, int> dragons[n];
    for (i = 0; i < n; i++) {
        cin >> dragons[i].first >> dragons[i].second;
    }
    sort(dragons, dragons + n);
    if (can_defeat(dragons, s, n)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}