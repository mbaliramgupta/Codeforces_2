#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int k;
    cin>>k;
    while(k--){
        int a,b;
        cin>>a>>b;
        if(a<b)
        a=a*2;
        else 
        b=b*2;
        int area=max(a,b)*max(a,b);
        cout<<area<<"\n";
    }
    return 0;
}