#include <bits/stdc++.h>
using namespace std;

int find_min(int* a, int n) {
    int min = 101;
    int index = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] <= min) {
            min = a[i];
            index = i;
        }
    }
    return index;
}

int find_max(int* a, int n) {
    int max = 0;
    int index = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] >= max) {
            max = a[i];
            index = i;
        }
    }
    return index;
}

int main(void) {
    int n, i, tmp;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min = find_min(a, n);
    int count = 0;
    for (i = min; i < n - 1; i++, count++) {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
    }
    int max = find_max(a, n);
    for (i = max; i > 0; i--, count++) {
        tmp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = tmp;
    }
    cout << count << endl;
    return 0;
}