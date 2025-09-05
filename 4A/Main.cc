#include <bits/stdc++.h>

using namespace std;

bool is_even(int n) {
    return n % 2 == 0;
}

int main(void) {
    int in;
    cin >> in;
    if (is_even(in) && in > 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}