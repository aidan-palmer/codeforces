#include <bits/stdc++.h>
#define endn '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i;
    cin >> n;
    string s;
    map<string, int> goals;
    for (i = 0; i < n; i++) {
        cin >> s;
        goals[s]++;
    }
    int max = -1;
    string team;
    for (const auto& m : goals) {
        if (m.second > max) {
            max = m.second;
            team = m.first;
        }
    }
    cout << team << endn;
    return 0;
}