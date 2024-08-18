#include <bits/stdc++.h>
using namespace std;

#define int long long

int gcd(int a, int b) {
    while (b != 0) {
        int tmp = a % b;
        a = b;
        b = tmp;
    }
    return a;
}
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

void solve() {
    int n;
    cin >> n;
    
    vector <int> k(n);
    for (int i = 0; i < n; i++) {
        cin >> k[i];
    }
    
    int z = 1;
    for (int i = 0; i < n; i++) {
        z = lcm(z, k[i]);
    }
    
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += z / k[i];
    }
    
    if (suma < z) {
        for (int i = 0; i < n; i++) {
            cout << z / k[i] << " ";
        }
        cout << "\n";
    } else {
        cout << -1 << "\n";
    }
}

signed main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}