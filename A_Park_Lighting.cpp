#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int k;
    cin>>k;
    double a,b;
    while(k--){
        cin>>a>>b;
        long long sum=ceil(a*b/2.0);
        cout<<sum<<endl;

    }
    return 0;
}