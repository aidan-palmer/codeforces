#include <iostream>
#include <vector>
#include <algorithm>
#define endn '\n'
#define ll int64_t
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    size_t i;
    string s;
    vector<int> nums;
    cin >> s;
    if (s.size() == 1) {
        cout << s << endn;
        return 0;
    }
    for (i = 0; i < s.size(); i += 2) {
        nums.push_back(s[i] - '0');
    }
    sort(nums.begin(), nums.end());
    for (i = 0; i < nums.size() - 1; i++) {
        cout << nums[i] << '+';
    }
    cout << nums[nums.size() - 1] << endn;
    return 0;
}