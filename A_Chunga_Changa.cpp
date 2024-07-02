#include<iostream>
using namespace std;
 
int main()
{
    long long int x,y,z;
    cin>>x>>y>>z;
    cout<<(x+y)/z<<" ";
    if((x/z)+(y/z)==(x+y)/z){
        cout<<0<<"\n";
    }
    else{
        cout<<min(z-x%z,z-y%z)<<"\n";
    }
        return 0;
}