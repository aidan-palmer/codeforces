#include <bits/stdc++.h>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout << n << " ";
    int num = n / 2;
    while (num > 0) {
        if (n % num == 0) {
            cout << num << " ";
            n = num;
        }
        num--;
    }
    cout << endn;
    return 0;
}