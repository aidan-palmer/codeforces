#include <iostream>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string a, b, c;
    cin >> a;
    cin >> b;
    for (size_t i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            c += '1';
        } else {
            c += '0';
        }
    }
    cout << c << endl;
    return 0;
}