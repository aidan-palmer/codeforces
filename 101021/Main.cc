#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int i, j;
    i = 1, j = 1'000'000;
    string response;
    while (i < j) {
        int guess = (i + j + 1) / 2;
        cout << guess << endl;
        cin >> response;
        if (response == "<") {
            j = guess - 1;
        } else {
            i = guess;
        }
    }
    cout << "! " << i << endl;
    return 0;
}