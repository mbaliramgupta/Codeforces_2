#include<iostream>
using namespace std;

int main()
{
    long long t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n==1 && m>1){
            cout<<"NO\n";
        }
        else {
            if(n<=3 && m>3){
           cout<<"NO\n";
        }
       
        else{
            cout<<"YES\n";
        }
        }
    }
    return 0;
}