#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> drinks(k+1);
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        drinks[x]++;
    }
    int count=0;
    int t=n/2+(n&1);
    for(int i=1;i<=k;i++){
        if(drinks[i]/2){
            count+=drinks[i]/2;

        }
    }
    count=min(count,t);
    cout<<2*count+(t-count)<<"\n";
    return 0;
}