#include<iostream>
#include<algorithm>
using namespace std;
#define ll long long int
bool solve(ll a,ll b,ll c){
    if((a+b+c)%9!=0){
        return false;
    }
    else{
        ll k=(a+b+c)/9;
        return (a>=k && b>=k && c>=k);
    }
}
int main()
{
    ll t,a,b,c;
    cin>>t;
      while(t--){
        cin>>a>>b>>c;
        if(solve(a,b,c)){
        cout<<"YES"<<endl;
      }
      else{
        cout<<"NO"<<endl;
      }
      }
      
    return 0;
}