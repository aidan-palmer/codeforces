#include <iostream>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j;
    cin >> t;
    bool ans[t]; // true == first
    for (i = 0; i < t; i++) {
        cin >> n;
        if (n % 3) {
            ans[i] = true;
        } else {
            ans[i] = false;
        }
    }
    for (i = 0; i < t; i++) {
        if (ans[i]) {
            cout << "First" << endn;
        } else {
            cout << "Second" << endn;
        }
    }
    return 0;
}