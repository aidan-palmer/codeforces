#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int caps = 0;
    for (char c : s) {
        if (c < 'a') {
            caps++;
        }
    }
    char ch;
    if (caps > s.size() / 2) {
        for (char c : s) {
            ch = toupper(c);
            cout << ch;
        }
        cout << endl;
        return 0;
    } else {
        for (char c : s) {
            ch = tolower(c);
            cout << ch;
        }
        cout << endl;
        return 0;
    }
    return 0;
}