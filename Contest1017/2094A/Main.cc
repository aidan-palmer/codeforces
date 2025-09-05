#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int t, i, j;
    cin >> t;
    string word;
    string ans[t];
    for (i = 0; i < t; i++) {
        string cat = "";
        for (j = 0; j < 3; j++) {
            cin >> word;
            cat += word[0];
        }
        ans[i] = cat;
    }
    for (i = 0; i < t; i++) {
        cout << ans[i] << endl;
    }
    return 0;
}