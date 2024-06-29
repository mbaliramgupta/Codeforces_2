#include<iostream>
#include<cmath>
using namespace std;
#define ll long long
int main()
{
    long  t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll int sum=0;
        if(n%2!=0){
            sum=ceil(n-1)/2;
        }
        else{
            sum=ceil((n/2)-1);
        }
        cout<<sum<<"\n";
    }
    return 0;
}