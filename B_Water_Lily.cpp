#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
     long double h,l;
     cin>>h>>l;
     long double x=(l*l-h*h)/(2*h); 
     cout<<setprecision(14)<<x<<"\n"; 
    return 0;
}