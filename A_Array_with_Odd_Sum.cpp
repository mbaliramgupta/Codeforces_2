#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        int odd=0;
        int even=0;
        int sum=0;
        cin>>n;
        vector<int> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
            if(v[i]%2==0){
                even++;
            }
            else if(v[i]%2!=0){
                odd++;
            }
        }
        int size=v.size();
        if(sum%2!=0 || sum==1){
            cout<<"YES";
        }
        else {
              if(odd!=0 && even!=0){
                cout<<"YES";
              }
             else{
                cout<<"NO";
             }
        }
        cout<<"\n";
    }
    return 0;
}