#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, sum=0;
        cin>>n;
        if(n%4!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            for(int i=2; i<=n; i+=2)
            {
                cout<<i<<" ";
                sum+=i;
            }
            for(int i=1; i<n-1; i+=2)
            {
                cout<<i<<" ";
                sum-=i;
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}