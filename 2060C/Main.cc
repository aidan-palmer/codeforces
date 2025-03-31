#include <bits/stdc++.h>
using namespace std;
/**
 * Alice optimal strategy: pick a number that can't be used to sum to k.
 *      -Else, pick a random number in the array.
 * Bob: pick a number b so that a + b = k.
 *      -Else, pick a random number in the array.
 */

//bool a_opt = false; // to optimize further

// Returns the index of an int that can't be used to sum to k
int no_sum(int n, int k, int* x) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        if (x[i] == -1) continue;
        bool has_sum = false;
        for (j = i + 1; j < n; j++) {
            if (x[j] != -1 && x[i] + x[j] == k) {
                has_sum = true;
                break;
            }
        }
        if (!has_sum) {
            return i;
        }
    }
    return -1;
}

// Returns the index of an int that can be used to sum to k
int has_sum(int n, int k, int* x, int a) {
    int i;
    for (i = 0; i < n; i++) {
        if (x[i] != -1 && x[i] + a == k) {
            return i;
        }
    }
    return -1;
}

int alice(int n, int k, int* x) {
    int ns = no_sum(n, k, x);
    int result;
    if (ns > -1) {
        result = x[ns];
        x[ns] = -1;
        return result;
    } else {
        for (int i = 0; i < n; i++) {
            if (x[i] != -1) {
                result = x[i];
                x[i] = -1;
                return result;
            }
        }
    }
    return -2;
}

int bob(int n, int k, int* x, int a) {
    int hs = has_sum(n, k, x, a);
    int result;
    if (hs > -1) {
        result = x[hs];
        x[hs] = -1;
        return result;
    } else {
        for (int i = 0; i < n; i++) {
            if (x[i] != -1) {
                result = x[i];
                x[i] = -1;
                return result;
            }
        }
    }
    return -2;
}

int game(int n, int k, int* x) {
    int score = 0, a, b, i;
    for (i = 0; i < n / 2; i++) {
        a = alice(n, k, x);
        b = bob(n, k, x, a);
        cout << "a: " << a << " b: " << b << endl;
        if (a + b == k) {
            score++;
        }
    }
    return score;
}

int main(void) {
    int t, n, k, i, j;
    cin >> t;
    int scores[t];
    for (i = 0; i < t; i++) {
        cin >> n >> k;
        int x[n];
        for (j = 0; j < n; j++) {
            cin >> x[j];
        }
        scores[i] = game(n, k, x);
    }
    for (i = 0; i < t; i++) {
        cout << scores[i] << endl;
    }
    return 0;
}