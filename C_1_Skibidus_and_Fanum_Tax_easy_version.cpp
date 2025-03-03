#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(vector<int>& vec1, vector<int>& vec2, int n, int m) {
    sort(vec2.begin(), vec2.end());  // Sorting to use binary search

    for (int i = 0; i < n - 1; i++) {
        if (vec1[i] > vec1[i + 1]) {
            auto it = lower_bound(vec2.begin(), vec2.end(), vec1[i] - vec1[i + 1]);
            if (it == vec2.end()) return;  // No valid change found
            vec1[i] = *it - vec1[i];
        }
    }
}

bool isSorted(vector<int>& vec1, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (vec1[i] > vec1[i + 1]) return false;
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> vec1(n), vec2(m);
        for (int i = 0; i < n; i++) cin >> vec1[i];
        for (int i = 0; i < m; i++) cin >> vec2[i];

        solve(vec1, vec2, n, m);

        cout << (isSorted(vec1, n) ? "YES" : "NO") << endl;
    }
    return 0;
}
