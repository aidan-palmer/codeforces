#include <iostream>
#include <vector>
using namespace std;

uint64_t fact(int x) {
    uint64_t result = 1;
    for (int i = 2; i <= x; i++) {
        result *= i;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, i, j, k, q, l;
    cin >> t;
    int results[t];
    for (i = 0; i < t; i++) {
        cin >> n >> k >> q;
        int a[n];
        for (j = 0; j < n; j++) {
            cin >> a[j];
        }
        vector<int> dates;
        j = 0, l = 0;
        while (j < n) {
            if (a[j] > q) {
                dates.push_back(j - l);
                l = j + 1;
            }
            j++;
        }
        uint64_t total = 0;
        for (int s : dates) {
            if (s >= k) {
                total += fact(s);
            }
        }
        results[i] = total;
    }
    for (i = 0; i < t; i++) {
        cout << results[i] << '\n';
    }
    return 0;
}

/**
 * getting some wrong answers
 */