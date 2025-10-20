#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string n;
    cin >> n;
    int count = 0;
    for (char c : n) {
        if (c == '4' || c == '7') {
            count++;
        }
    }
    if (count == 4 || count == 7) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}