#include <bits/stdc++.h>
using namespace std;

double size(int n) {
    return round(n / 2021.0);
}

bool can_sum(int n) {
    double s = size(n);
    double r = n / s;
    return r >= 2020 && r <= 2021;
}

int main(void) {
    int t, i;
    cin >> t;
    int n[t];
    for (i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (i = 0; i < t; i++) {
        if (can_sum(n[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}