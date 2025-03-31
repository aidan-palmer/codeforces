#include <bits/stdc++.h>
using namespace std;

string char_to_bin(const char& c) {
    switch (c) {
        case '>':
            return "1000";
        case '<':
            return "1001";
        case '+':
            return "1010";
        case '-':
            return "1011";
        case '.':
            return "1100";
        case ',':
            return "1101";
        case '[':
            return "1110";
        case ']':
            return "1111";
    }
    return "";
}

int main(void) {
    string p, bin = "";
    cin >> p;
    int result = 0;
    for (char c : p) {
        bin = char_to_bin(c);
        for (char bit : bin) {
            result = (result * 2 + (bit - '0')) % 1000003;
        }
    }
    cout << result << endl;
    return 0;
}