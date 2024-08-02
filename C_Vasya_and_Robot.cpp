#include <iostream>
#define ll long long
using namespace std;

const ll MAX_LENGTH = 1e5 + 9;
ll x, y, n;
string s;

void updatePosition(pair<ll, ll> &position, char move, ll distance) {
    switch (move) {
        case 'U': position.second += distance; break;
        case 'D': position.second -= distance; break;
        case 'L': position.first -= distance; break;
        case 'R': position.first += distance; break;
    }
}

bool canReachTarget(pair<ll, ll> currentPos, pair<ll, ll> targetPos, ll len) {
    ll distance = abs(currentPos.first - targetPos.first) + abs(currentPos.second - targetPos.second);
    return (distance % 2 == len % 2) && (len >= distance);
}

bool isValidLength(ll len) {
    pair<ll, ll> position = {0, 0}; 
    for (ll i = len; i < n; ++i) {
        updatePosition(position, s[i], 1);
    }

    ll left = 0, right = len;
    while (true) {
        if (canReachTarget(position, {x, y}, len)) {
            return true;
        }
        if (right == n) break;
        updatePosition(position, s[left++], 1);
        updatePosition(position, s[right++], -1);
    }
    
    return false;
}

int main() {
    cin >> n;
    cin >> s;
    cin >> x >> y;
    
    if (!isValidLength(n)) {
        cout << "-1" << endl;
        return 0;
    }
    
    ll left = -1, right = n;
    while (right - left > 1) {
        ll mid = (left + right) / 2;
        if (isValidLength(mid)) {
            right = mid; 
        } else {
            left = mid; 
        }
    }
    
    cout << right << endl; 
    return 0;
}