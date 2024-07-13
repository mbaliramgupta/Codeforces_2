#include<iostream>
using namespace std;

int main()
{
    long long int t;
    cin>>t;
    while(t--){
        long long int x,y,a,b;
        cin>>x>>y>>a>>b;
        long long int total=0;
        if(x>y){
            swap(x,y);
        }
        total+=a*(y-x);
        if(2*a<b){
            total+=x*(2*a);
        }
        else{
            total+=x*b;
        }
        cout<<total<<endl;
    }
    return 0;
}