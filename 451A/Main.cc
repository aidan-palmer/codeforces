#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int n, m;
    cin >> n >> m;
    int x = min(n, m);
    if (x % 2 == 0) {
        cout << "Malvika" << endl;
    } else {
        cout << "Akshat" << endl;
    }
    return 0;
}