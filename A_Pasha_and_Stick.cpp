#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;
    if(n%2!=0){
        cout<<0<<"\n";
    }
    else{
        cout<<(n-1)/4<<"\n"; 
    }
    return 0;
}