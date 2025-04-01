#include <bits/stdc++.h>
using namespace std;

int find_min(int* a, int n) {
    int min = 101;
    for (int i = 0; i < n; i++) {
        if (a[i] <= min) {
           // cout << 
            min = i;
        }
    }
    return min;
}

int find_max(int* a, int n) {
    int max = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] >= max) {
            max = i;
        }
    }
    return max;
}

int main(void) {
    int n, i, tmp;
    cin >> n;
    int a[n];
    for (i = 0; i < n; i++) {
        cin >> a[i];
        //cout << a[i] << " ";
    }
    //cout << endl;
    int min = find_min(a, n);
    int max = find_max(a, n);
    cout << min << " " << max << endl;
    if (min == max) {
        cout << 0 << endl;
        return 0;
    }
    int count = 0;
    for (i = min; i < n - 1; i++, count++) {
        tmp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = tmp;
    }
    for (i = max; i > 0; i--, count++) {
        cout << i << endl;
        tmp = a[i];
        a[i] = a[i - 1];
        a[i - 1] = tmp;
    }
    cout << count << endl;
    return 0;
}