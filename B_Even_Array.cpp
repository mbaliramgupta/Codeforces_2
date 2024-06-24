#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int t;
    cin>>t;
  while(t--){
          int even=0,odd=0;
        int n;
        cin>>n;
        vector<int> v1(n);
        for(int i=0;i<n;i++){
            cin>>v1[i];
        }
        for(int i=0;i<n;i++){
            if(i%2!=v1[i]%2){
                if(v1[i]%2==0)even++;
                else
                odd++;
            }
        }
        if(even==odd){
            cout<<even<<"\n";
        }
        else
        cout<<-1<<"\n";
    }
    return 0;
}