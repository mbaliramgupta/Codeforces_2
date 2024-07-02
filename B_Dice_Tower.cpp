#include<iostream>
using namespace std;

int main()
{
    long long int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(n%14>=1 && n%14<=6 && n>14){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}