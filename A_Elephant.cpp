#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n%5==0){
        long long div=n/5;
        cout<<div<<"\n";
    }
   else if(n%5!=0){
    long long div=n/5;
    cout<<div+1<<"\n";
   }
    return 0;
}