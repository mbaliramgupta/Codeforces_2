#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        double n,k;
        cin>>n>>k;
        long long fact=ceil(n/k);
        k=k*fact;
        cout<<ceil(k/n)<<"\n";
    }
    return 0;
}