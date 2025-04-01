#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int x, i, j;
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            cin >> x;
            if (x) break;
        }
        if (x) break;
    }
    x = abs(2 - i) + abs(2 - j);
    cout << x << endl;
    return 0;
}