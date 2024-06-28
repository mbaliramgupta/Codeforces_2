#include<iostream>
#define ll long long 
using namespace std;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll diff=abs(a-b);
        cout<<(diff+9)/10<<"\n";
    }
    return 0;
}