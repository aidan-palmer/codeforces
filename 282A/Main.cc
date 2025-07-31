#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int op(string x) {
    // return -1 if --, else return 1
    for (char c : x) {
        if (c == '+') {
            return 1;
        }
        if (c == '-') {
            return -1;
        }
    }
    return 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, i, j;
    cin >> n;
    string x;
    j = 0;
    for (i = 0; i < n; i++) {
        cin >> x;
        j += op(x);
    }
    cout << j << endl;
    return 0;
}