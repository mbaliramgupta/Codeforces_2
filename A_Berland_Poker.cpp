#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
         int n,m,k;
          cin>>n>>m>>k;
        int max=n/k;
        if(m<=max){
            cout<<m<<"\n";
        }
            else if(m>max){
                  int rem=m-max;
                  int count=rem/(k-1);
                  if(rem%(k-1)!=0){
                        count++;
                  }
                  cout<<max-count<<"\n";
            }
            
        
    }
    return 0;
}