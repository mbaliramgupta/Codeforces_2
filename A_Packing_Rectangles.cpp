#include<iostream>
using namespace std;
#define ll long long 

bool find(ll num, ll w, ll h, ll n) {
    return ((num / w) * (num / h)) >= n;
}

int main() {
    ll w, h, n;
    cin >> w >> h >> n;
    
    ll s = 1, e = 1;
    // Find upper bound for e
    while (!find(e, w, h, n)) e *= 2;

    // Binary search for minimum num
    while (e > s + 1) {
        ll mid = (s + e) / 2;
        if (find(mid, w, h, n)) {
            e = mid;
        } else {
            s = mid;
        }
    }
    
    cout << e << endl;
    return 0;
}