#include <bits/stdc++.h>
using namespace std;

bool contains(string p) {
    for (char c : p) {
        if (c == 'H' || c == 'Q' || c == '9' || c == '+') {
            return true;
        }
    }
    return false;
}

int main(void) {
    string p;
    cin >> p;
    if (contains(p)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}