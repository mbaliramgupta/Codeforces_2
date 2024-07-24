#include<iostream>
#include<algorithm>
using namespace std;
int minmax(long long int a){
    long long int minimum=10,maximum=0;
    while(a){
        long long int rem=a%10;
        a=a/10;
        minimum=min(minimum,rem);
        maximum=max(maximum,rem);
    }
    return minimum*maximum;
}
int main()
{
    long long int a,k,t;
    cin>>t;
    while(t--){
        cin>>a>>k;
        k--;
        while(k--){
            long long int y=minmax(a);
            if(y==0)break;
            a+=y;
        }
        cout<<a<<"\n";
    }
    return 0;
}