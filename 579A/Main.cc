#include <bits/stdc++.h>
using namespace std;

int main(void) {
    uint32_t x;
    cin >> x;
    string bin = bitset<32>(x).to_string();
    int count = 0;
    for (char& c : bin) {
        if (c == '1') {
            count++;
        }
    }
    cout << count << endl;
    return 0;
}