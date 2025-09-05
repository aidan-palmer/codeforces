#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    size_t t, n, i, j;
    string s;
    cin >> s;
    string comp;
    for (char c : s) {
        bool flag = false;
        switch (comp.size()) {
            case 0:
            {
                if (c == 'h') {
                    comp += 'h';
                }
                break;
            }
            case 1:
            {
                if (c == 'e') {
                    comp += 'e';
                }
                break;
            }
            case 2:
            {
                if (c == 'l') {
                    comp += 'l';
                }
                break;
            }
            case 3:
            {
                if (c == 'l') {
                    comp += 'l';
                }
                break;
            }
            case 4:
            {
                if (c == 'o') {
                    comp += 'o';
                }
                break;
            }
            case 5:
            {
                flag = true;
                break;
            }
        }
        if (flag) {
            break;
        }
    }
    if (comp == "hello") {
        cout << "YES" << endn;
    } else {
        cout << "NO" << endn;
    }
    return 0;
}