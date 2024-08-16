#include<iostream>
using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int l=-1,r=1e9;
        while(r-l>1){
            long long int mid=(l+r)/2;
            if(mid*mid>=n){
                r=mid;
            }
            else{
                l=mid;
            }
        }
        cout<<r-1<<endl;
    }
    return 0;
}