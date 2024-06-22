#include<iostream>
using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--){
        long long x,y,n;
        cin>>x>>y>>n;
        long long rem=(n-y)/x;
        long long sum=rem*x+y;
        cout<<sum<<"\n";
    }
    return 0;
}