
#include<iostream>
#define ll long long
using namespace std;

int main()
{
   ll n, m, tc, num, t = 1;

    cin>>tc;
    while (tc--){
        string str;
        cin >> str;

        bool zero = false;
        ll sum = 0, cnt = 0;
        for (ll i = 0; i < str.length(); ++i) {
            m = str[i]-'0';
            if(m % 2 == 0) cnt++;
            if(m == 0) zero = true;
            sum += m;
        }

        if(sum % 3 == 0 && cnt > 1 && zero) cout << "red" << endl;
        else cout << "cyan" << endl;
    }


    return 0;
}