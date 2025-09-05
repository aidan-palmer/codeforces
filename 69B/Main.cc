#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, m, i, j, l, r, c;
    cin >> n >> m;
    map<int, vector<vector<int>>> times; // section, {time, rubles, index}
    for (i = 0; i < m; i++) {
        cin >> l >> r >> t >> c;
        for (j = l; j <= r; j++) {
            times[j].push_back({t, c, i});
        }
    }
    int total = 0;
    for (const auto& data : times) {
        int min_time = 10000;
        int min_time_rubles = 0;
        int index = 1000;
        for (vector<int> p : data.second) {
            if (p[0] < min_time || (p[0] == min_time && p[2] < index)) {
                min_time = p[0];
                min_time_rubles = p[1];
                index = p[2];
            }
        }
        total += min_time_rubles;
    }
    cout << total << endl;
    return 0;
}