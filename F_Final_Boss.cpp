#include<iostream>
#include<vector>
using namespace std;
#define ll long long
ll check(ll mid,ll n,ll h,vector<ll>attack,vector<ll>cooldown){
          ll sum=0;
           for(int i=0;i<n;i++){
               ll total=1+(mid-1)/cooldown[i];
               sum+=(total*attack[i]);
               if (sum>= h)
            {
                break;
            }
           }
           return sum;
}
int main()
{
    ll t,h,n;
    cin>>t;
    while(t--){
        cin>>h>>n;
        vector<ll>attack(n);
        vector<ll>cooldown(n);
        for(int i=0;i<n;i++){
            cin>>attack[i];
        }
        for(int j=0;j<n;j++){
            cin>>cooldown[j];
        }
        ll low=1,high=1e12;
        ll ans=high;
        while(low<=high){
            ll mid=(low+high)/2;
            if(check(mid,n,h,attack,cooldown)>=h){
                 ans=min(ans,mid);
                 high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}