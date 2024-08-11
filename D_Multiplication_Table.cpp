#include<iostream>
using namespace std;
typedef long long ll;
ll check(ll x, ll n,ll m){
    ll sum=0;
    --x;
    for(ll i=1;i<=n;i++){
        sum+=min(m,x/i);
    }
    return sum;
}
int main()

{
    ll n,m,k;
    cin>>n>>m>>k;
    ll l=1,r=(n*m)+1;
    while(l<r){
        ll x=(l+r)/2;
        if(check(x,n,m)<k){
            l=x+1;
        }
        else{
            r=x;
        }
    }
    cout<<l-1<<"\n";
    return 0;
}