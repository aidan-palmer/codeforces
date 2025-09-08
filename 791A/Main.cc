#include <iostream>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, a, b;
    cin >> a >> b;
    t = 0;
    while (a <= b) {
        a *= 3;
        b *= 2;
        t++;
    }
    cout << t << endl;
    return 0;
}