#include<iostream>
using namespace std;
#define ll long long 
ll sum(ll x)
{
    return x*(x+1)/2;
}
ll sum(ll n,ll k)
{
    if(n<=1)
    return sum(k);
    return sum(k)-sum(n-1);
}
ll minnspliter(ll n, ll k)
{
    ll st=1,en=k;
    while(st<en){
        ll mid=(st+en)/2;
        ll sum1=sum(mid,k);
        if(sum1==n){
            return k-mid+1;
        }
        if(sum1>n){
            st=mid+1;
        }
        else{
            en=mid;
        }
    }
    return k-st+2;
}
int main()
{
     ll n,k;
    cin>>n>>k;
    if(n==1){
        cout<<0<<endl;

    }
    else if(n<=k){
        cout<<1<<endl;
    }
    else{
        --k,--n;
        if(sum(k)<n){
            cout<<-1<<endl;
        }
        else
        cout<<(minnspliter(n,k))<<endl;
    }
    return 0;
}