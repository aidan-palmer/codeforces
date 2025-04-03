#include <bits/stdc++.h>

using namespace std;

string shorten(string& s) {
    string word = s[0] + to_string(s.size() - 2) + s[s.size() - 1];
    return word;
}

int main(void) {
    int n, i;
    cin >> n;
    string words[n];
    for (i = 0; i < n; i++) {
        cin >> words[i];
    }
    for (i = 0; i < n; i++) {
        if (words[i].size() > 10) {
            cout << shorten(words[i]) << endl;
        } else {
            cout << words[i] << endl;
        }
    }
    return 0;
}