#include <bits/stdc++.h>
using namespace std;

int main(void) {
    string s, og;
    cin >> s;
    int n = s.size();
    int i = 0;
    bool space = false;
    while (i < n) {
        if (s.substr(i, 3) != "WUB") {
            og += s[i];
            i++;
            space = true;
        } else {
            i += 3;
            if (space) {
                og += ' ';
                space = false;
            }
        }
    }
    cout << og << endl;
    return 0;
}