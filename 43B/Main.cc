#include <bits/stdc++.h>
#define endn '\n'
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    size_t i;
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    map<char, int> chars;
    for (i = 0; i < s1.size(); i++) {
        if (s1[i] != ' ') {
            chars[s1[i]]++;
        }
    }
    for (i = 0; i < s2.size(); i++) {
        if (s2[i] != ' ') {
            if (chars[s2[i]] == 0) {
                cout << "NO" << endn;
                return 0;
            }
            chars[s2[i]]--;
        }

    }
    cout << "YES" << endn;
    return 0;
}