#include<iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--){
        int n,m;
        cin>>n>>m;
        if(n<=2){
            cout<<1<<endl;
        }
        else{
            n-=2;
            cout<<n/m+(n%m!=0)+1<<endl;
        }
    }
    return 0;
}