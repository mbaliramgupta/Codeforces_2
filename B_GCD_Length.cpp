#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int x=pow(10,a-1);
        int y=pow(10,b-1)+pow(10,c-1);
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}