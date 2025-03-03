#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
         vector<int>num(n);
         for(int i=0;i<n;i++){
            cin>>num[i];
         }
         sort(num.begin(),num.end());
         int i=0,j=num.size()-1;
          int count=0;
         while(i<j){
              if(num[i]+num[j]==k){
                    count++;
                    i++;
                    j--;
              }
              else if(num[i]+num[j]<k){
                i++;
              }
              else if(num[i]+num[j]>k){
                j--;
              }
         }
         cout<<count<<endl;

    }
    return 0;
}