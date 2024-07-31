#include<iostream>
#include<vector>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    vector<int>v(n);
    for(ll i=0;i<n;i++){
        cin>>v[i];
    }
    ll l=-1,r=m;
    while(l<r-1){
        ll mid=(l+r)/2;
         ll prev=0;
         bool bad=false;
         for(ll i=0;i<n;i++){
            ll lf=v[i],rf=v[i]+mid;
            if((lf<=prev && prev<=rf)||(lf<=prev+m && prev+m<=rf)){
                continue;
            }
            if(lf<prev){
                bad=true;
                break;
            }
            else{
                prev=lf;
            }
         }
         if(bad){
            l=mid;
         }
         else{
            r=mid;
         }
         
    }
    cout<<r<<"\n";
    return 0;
}