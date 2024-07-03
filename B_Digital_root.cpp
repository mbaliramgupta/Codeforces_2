#include<iostream>
using namespace std;

int main()
{
    long long t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        long long sum=0;
        sum=m+(n-1)*9;
        cout<<sum<<"\n";
    }
    return 0;
}