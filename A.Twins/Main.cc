#include <bits/stdc++.h>

using namespace std;

int min_coins(int* coins, int n, int half) {
    int sum = 0;
    int count = 0;
    for (int i = n - 1; i >= 0; i--) {
        sum += coins[i];
        count++;
        if (sum > half) {
            return count;
        }
    }
    return -1;
}

int main(void) {
    int n, i, sum = 0;
    cin >> n;
    int coins[n];
    for (i = 0; i < n; i++) {
        cin >> coins[i];
        sum += coins[i];
    }
    int half = sum / 2;
    sort(coins, coins + n);
    cout << min_coins(coins, n, half) << endl;
    return 0;
}