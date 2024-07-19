#include<iostream>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int sum=0;
    int n=s.size();
    for(int i=0;i<n;i++){
        sum+=s[i]-'0';
    }
    if(sum==0){
        cout<<0<<"\n";
    }
    else if(sum==1){
        cout<<n/2<<"\n";
    }
    else{
        cout<<(n+1)/2<<"\n";
    }
    return 0;
}