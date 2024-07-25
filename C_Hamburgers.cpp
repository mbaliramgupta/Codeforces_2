#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool check(long long i, long long rb, long long rs, long long rc, long long nb, long long ns, long long nc, long long pb, long long ps, long long pc, long long r) {
    long long nb_ = max(0LL, rb * i - nb);
    long long ns_ = max(0LL, rs * i - ns);
    long long nc_ = max(0LL, rc * i - nc);
    long long pb_ = nb_ * pb;
    long long ps_ = ns_ * ps;
    long long pc_ = nc_ * pc;
    long long total = pb_ + ps_ + pc_;
    return total <= r;
}

long long solve() {
    string s;
    cin >> s;

    long long nb, ns, nc;
    cin >> nb >> ns >> nc;

    long long pb, ps, pc;
    cin >> pb >> ps >> pc;

    long long r;
    cin >> r;

    long long rb = 0, rs = 0, rc = 0;
    for (char ch : s) {
        if (ch == 'B') rb++;
        else if (ch == 'S') rs++;
        else if (ch == 'C') rc++;
    }

    long long ans = 0;
    long long left = 0, right = 1e13;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (check(mid, rb, rs, rc, nb, ns, nc, pb, ps, pc, r)) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return ans;
}

int main() {
    long long num = solve();
    cout << num << endl;
    return 0;
}