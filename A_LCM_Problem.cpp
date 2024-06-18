#include<iostream>
using namespace std;

int main()
{
    int k;
    cin>>k;
long long l,r;
    while(k--){
        long a=0,b=0;
        cin>>l>>r;
        if(2*l<=r){
           a=l;
           b=2*a;
        }
        else{
            a=-1;
            b=-1;
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
