#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n;
    vector<int>vec1(n);
    for(int i=0;i<n;i++){
        cin>>vec1[i];
    }
    sort(vec1.begin(),vec1.end());
    cin>>k;
    
    while(k--){
        ll l,r;
     cin>>l;
        ll s=0,e=n-1,result1=n;
        while(s<=e){
           ll mid=(s+e)/2;
            if(l<=vec1[mid]){
                 result1=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        s=0,e=n-1;
        cin>>r;
        ll result2=n;
        while(s<=e){
           ll mid=(s+e)/2;
            if(vec1[mid]>r){
                
                e=mid-1;
                result2=mid;
            }
            else{
                s=mid+1;
            }
        }
        cout<<result2-result1<<" ";
    }
    return 0;
}