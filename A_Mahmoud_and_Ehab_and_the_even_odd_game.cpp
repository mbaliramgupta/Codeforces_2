#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2==0){
        cout<<"Mahmoud";
        n=n-n;
    }
    else{
        cout<<"Ehab";
    }
    return 0;
}