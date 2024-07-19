#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    long long  t;
    cin>>t;
     int arr[t];
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    sort(arr,arr+t);
    if(arr[t-1]>=arr[t-2]+arr[t-3])
        cout<<"NO"<<endl;
    else{
        cout<<"YES"<<endl;
        cout<<arr[t-1]<<" ";
        for(int i=t-3;i>=0;i--){
            cout<<arr[i]<<" ";
        }
        cout<<arr[t-2]<<endl;
    }
    return 0;
}