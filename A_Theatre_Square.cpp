#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    unsigned long long n,m,a;
    cin>>n>>m>>a;
    unsigned long long x=ceil((double)n/a)*ceil((double)m/a);
    cout<<x<<"\n";
    return 0;
}