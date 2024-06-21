#include<iostream>
using namespace std;

int main()
{
    long t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long sum=a+b+c+d;
        if(sum%3==0 && a<=sum/3 && b<=sum/3 && c<=sum/3){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }

    }
    return 0;
}