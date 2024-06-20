#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
       long long x,y,z;
       cin>>x>>y>>z;
       if(x>y)swap(x,y);
       if(y>z)swap(y,z);
       if(x>z)swap(x,z);
       if(y==z){
        cout<<"YES"<<endl<<x<<" "<<x<<" "<<y<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }
    return 0;
}