#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
#define ll long long

bool check(ll mid, const vector<int>& diff_v, ll h) {
    ll total = 0;
    for (const auto& x : diff_v) {
        total += min(mid, (ll)x);
    }
    total += mid; // Updated total calculation
    return total >= h; // Corrected return statement
}

ll solve() {
    ll n, h;
    cin >> n >> h;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    vector<int> diff_v(n - 1);
    ll diff = 0;
    for (int i = 0; i < n - 1; i++) {
        diff = abs(v[i + 1] - v[i]);
        diff_v[i] = diff;
    }

    ll i = 0, j = 1e18; // Adjusted binary search initialization
    while (i < j) {
        ll mid = (i + j) / 2;
        if (check(mid, diff_v, h)) {
            j = mid;
        } else {
            i = mid + 1;
        }
    }

    return i; // Ensured function returns a value
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        cout << solve() << "\n"; // Corrected output formatting
    }
    return 0;
}