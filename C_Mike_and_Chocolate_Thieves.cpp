#include<iostream>
using namespace std;
#define ll long long
ll get(ll n){
    ll ans=0;
    for(ll i=2;i*i*i<=n;++i)
        ans+=n/(1ll*i*i*i);
       return ans;
    }
int main()
{
    ll n,k=-1;
    cin>>n;
    ll low=0,high=5e15;
    while(low<high){
        ll mid=(low+high)/2;
        if(get(mid)<n)low=mid+1;
        else
        high=mid;
    }
    if(get(low)==n)
        k=low;
   cout<<k<<"\n";
    return 0;
}