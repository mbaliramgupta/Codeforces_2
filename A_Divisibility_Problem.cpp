#include<iostream>
#define ll long long
using namespace std;

int main()
{
    ll int t;
    cin>>t;
    while(t--){
        ll int a,b;
        cin>>a>>b;
        if(a%b==0){
            cout<<0<<"\n";
        }
        else{
            ll int sum=a%b;
            cout<<b-sum<<"\n";
        }
    }
    return 0;
}