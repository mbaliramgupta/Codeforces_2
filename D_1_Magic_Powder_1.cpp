#include<iostream>
#include<vector>
using namespace std;
#define ll unsigned long long
bool canmake(ll mid,const vector<ll> &a,const vector<ll> &b,ll k){
    ll powder=0;
    for(ll i=0;i<a.size();i++){
        ll need=a[i]*mid;
        if(need>b[i]){
            powder+=need-b[i];
        }
    }
    return powder<=k;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<ll> a(n),b(n);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++)cin>>b[i];
    ll low=0,high=1e10,cookies=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(canmake(mid,a,b,k)){
              cookies=mid;
             low=mid+1;
        }
        else{
            high=mid-1;
        }
       
    }
    cout<<cookies<<"\n";
    return 0;
}